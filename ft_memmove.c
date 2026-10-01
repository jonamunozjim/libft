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

// Description:
//	Copy n bytes from src to dst (handling overlapping correctly).
//
//	Parameters:
//		dest, destination.
//		src, source.
//		n, bytes to copy.
//
//	Return value:
//		ptr to dest.

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
