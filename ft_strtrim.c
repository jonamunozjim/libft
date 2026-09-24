/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:41:00 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/24 10:59:43 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 * 								*
 * Description:							*
 * 	Allocate memory with malloc and return a copy of 's1'	*
 * 	with the characters of 'set' deleted at start and end	*
 * 	of the string,						*
 *								*
 * Return value:						*
 * 	Trimmed string.						*
 * 	NULL if memory allocation fails				*
 * 								*
 ***************************************************************/

#include "libft.h"

static size_t	find_start(const char *s1, const char *set)
{
	size_t			start;
	size_t			i;
	unsigned int	exit;

	i = 0;
	start = 0;
	exit = 0;
	while (set[start] && !exit)
	{
		if (set[start] == s1[i + start])
			start++;
		else
		{
			start = 0;
			exit = 1;
		}
	}
	return (start);
}

static size_t	find_last(const char *s1, const char *set)
{
	size_t			i;
	size_t			j;
	unsigned int	exit;

	exit = 0;
	i = ft_strlen (s1);
	j = ft_strlen (set);
	if (s1[i] == set[j] && !exit)
	{
		while (j > 0 && !exit)
		{
			if (set[j] == s1[i])
			{
				i--;
				j--;
			}
			else
			{
				i = ft_strlen(s1);
				exit = 1;
			}
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	start = find_start(s1, set);
	end = find_last(s1, set) - start;
	return (ft_substr(s1, start, end));
}
/*
int	main(void)
{
	char	s1[] = "12356712";
	char	set[] = "23";

	printf("s1: %s\nset: %s\ntrim: %s\n", s1, set, ft_strtrim(s1, set));
	return (0);
}*/
