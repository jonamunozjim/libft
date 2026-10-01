/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:41:00 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/10/01 09:22:40 by jmunoz-j         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	char			*output;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	output = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strchr(set, s1[end]) && s1[start])
		end--;
	if (end != 0)
	{
		while ((start + i) <= end)
		{
			output[i] = s1[start + i];
			i++;
		}
	}
	output[i] = '\0';
	return (output);
}
/*
int	main(void)
{
	char	s1[] = "   ";
	char	set[] = "  ";
	char	*trim;

	trim = ft_strtrim (s1, set);
	printf("s1: %s\nset: %s\ntrim: %s\n", s1, set, trim);
	free (trim);
	return (0);
}*/
