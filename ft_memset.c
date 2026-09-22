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

#include "libft.h"
//#include <stdio.h>

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
