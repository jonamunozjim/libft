/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:36:27 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 11:02:05 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen (dst);
	while (src[i] && i < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}
/*
int	main(void)
{
	char src[] = "Hola";
	char dst[50] = "123";

	ft_strlcat (dst, src, 50);
	printf("Str %s\nDst: %s\n", src, dst);
	return (0);
}*/
