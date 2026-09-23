/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:23:12 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 11:12:55 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************************
 * Descrption:							*
 * 	Scan initial n bytes of the memory area pointed by s.	*
 *								*
 * Return value:						*
 * 	A pointer to the matchin byte or NULL if not found      *
 *								*
 ****************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)&((unsigned char *)s)[i]);
		else
			i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	n = 7;
	char	s[] = "Holaa";
	int	c = 'l';
	char	*output;

	output = ft_memchr (s, c, n);
	printf("S: %s\nC: %c\nN: %li\n", s, c, n);
	printf ("Memchr_output >> %s\n", output);
	return (0);
}*/
