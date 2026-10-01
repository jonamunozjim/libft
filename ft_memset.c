/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:35:42 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:44:46 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
//	Fills a memory block with a specific byte..
//
//	Parameters:
//		s, position to be filled
//		c, byte value
//		n, bytes to be filled
//
//	Return value:
//		ptr to dest.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Hola que tal";
	char	*ptr;

	printf ("Str: %s\n", str);
	ptr = ft_memset (str, 65, 3);
	printf ("Str after memset: %s\n", str);
	printf ("ptr: %s\n", ptr);
	return (0);
}*/
