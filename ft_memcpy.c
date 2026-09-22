/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:32:51 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:34:04 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hola";
	char	dest[] = "que tal";

	ft_memcpy (dest, src, 3);
	printf("src: %s\ndest: %s", src, dest);
	return (0);
}*/
