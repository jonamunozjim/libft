/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:23:12 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 12:38:00 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************************
 * Descrption:							*
 * 	Scan initial n bytes of the memory area pointed by s.	*
 *								*
 * Return value:						*
 * 	A pointer to the matching byte or NULL if not found      *
 *								*
 ****************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	n = 10;
	char	s[] = "42 Firenze";
	int	c = 'F';
	char	*output;

	output = ft_memchr (s, c, n);
	printf("S: %s\nC: %c\nN: %li\n", s, c, n);
	printf ("Memchr_output >> %s\n", output);
	return (0);
}*/
