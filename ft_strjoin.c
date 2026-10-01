/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:19:10 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 13:33:08 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *								*
 * Description:							*
 * 	Allocate memory with malloc and return 's1' and 's2'	*
 * 	contactenated as a new string.				*
 *								*
 * Return value:						*
 * 	On success, returns the new string			*
 * 	NULL if memory allocation fails.			*
 * 								*
 ***************************************************************/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen (s1) + 1;
	len2 = ft_strlen (s2) + 1;
	str = malloc((len1 + len2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len1);
	ft_strlcat(str, s2, (len1 + len2));
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = " world";

	printf("s1: %s\ns2: %s\nJoin: %s", s1, s2, ft_strjoin(s1, s2));
	return (0);
}*/
