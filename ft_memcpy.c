/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 10:50:36 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 11:12:24 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(void)
{
	char	src[] = "Hola";
	char	dest[] = "que tal";

	ft_memcpy (dest, src, 3);
	printf("src: %s\ndest: %s", src, dest);
	return (0);
}
