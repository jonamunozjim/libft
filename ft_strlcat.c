/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:36:27 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 11:38:15 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
//	Concat strings dst and src using the full size buffer
//
// Parameters:
// 	dst, string where the src is concatenated
// 	src, string to be concatenated after src
// 	size, full size buffer (size - strlen(dst) - 1)
//
// Return value:
// 	If size <= dst, the size of the lengh tried to create  (size + src_len)
// 	Total length of string tried to create ( strlen(dst) + strlen(src)
//

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen (dst);
	src_len = ft_strlen (src);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && ((dst_len + i) < (size - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char src[] = " world";
	char dst[50] = "hello";
	size_t	size = 8;
	
	printf("len src: %li\nlen dst: %li\n", ft_strlen(src), ft_strlen(dst));
	printf("Str %s\nDst: %s\n", src, dst);
	printf("size cat: %li\nstrlcat: %s\n", ft_strlcat(dst, src, size), dst);
	
	return (0);
}*/
