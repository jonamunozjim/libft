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

static void	fill_output(char *s1, char *output,
	unsigned int start, unsigned int end)
{
	unsigned int	i;

	i = 0;
	while ((start + i) <= end)
	{
		output[i] = s1[start + i];
		i++;
	}
	output[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*output;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (s1[start] == '\0')
		return (ft_substr (s1, 0, 0));
	while (ft_strchr(set, s1[end]) && s1[start])
		end--;
	output = malloc((end - start + 2) * sizeof(char));
	if (output == NULL)
		return (NULL);
	if (end != 0)
		fill_output ((char *)s1, output, start, end);
	return (output);
}
/*
int	main(void)
{
	char	s1[] = "xax";
	char	set[] = "x";
	char	*trim;

	trim = ft_strtrim (s1, set);
	printf("s1: %s\nset: %s\ntrim: %s\n", s1, set, trim);
	free (trim);
	return (0);
}*/
