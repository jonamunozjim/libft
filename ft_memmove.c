/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:22:57 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 10:32:50 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	if ((unsigned char *)dest <= ((unsigned char *)src))
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "999";
	char	out[] = "00000";
	ft_memmove (out, str, 2);
	printf("str: %s\ndest: %s\n", str, out);
	printf("strlen: %li", ft_strlen(str));
	return (0);
}*/
