/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:51:23 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 11:01:36 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "Hola";
	char	dst[] = "00";
	size_t	t;
	printf("%s\n", src);
	t = ft_strlcpy (dst, src, 3);
	printf ("Src: %s\nDst: %s\nLen_src: %li", src, dst, t);
	
	return (0);
}*/
