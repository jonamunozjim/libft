/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:41:00 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 11:49:10 by jmunoz-j         ###   ########.fr       */
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

static	unsigned int check_set(char const *s1, char const *set, unsigned int i)
{
	unsigned int	j;
	unsigned int	control;

	control = 0;
	j = 0;
	while (set[j] && !control)
	{
		if(s1[i] == set[j])
			control = 1;
                else
			j++;
		if (set[j + 1] == '\0')
			control = 2;
	}
	return (control);
}
	

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	control;
	char	*output;

	i = 0;
	j = 0;
	control = 0;
	output = calloc(ft_strlen(s1) + 1, sizeof(char));
	while (s1[i] && !control)
	{
		control = check_set(s1, set, i);
		if (control == 1)
		{
			j = 0;
			i++;
		}
	}
	while (s1[i+j])
	{
		output[j] = s1[i + j];
		j++;
	}
	return (output);
}

int	main(void)
{
	char	s1[] = "123567123";
	char	set[] = "213";

	printf("s1: %s\nset: %s\ntrim: %s\n", s1, set, ft_strtrim(s1, set));
	return (0);
}
