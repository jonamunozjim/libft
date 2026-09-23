/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:13:23 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 12:03:27 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *  Description:						*
 *  	It compare the first n bytes of memory areas s1 and s2  *
 *								*
 *  Return value:						*
 *  int value s1-s2						*
 *  								*
 ****************************************************************/

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (sc1[i] == sc2[i])
			i++;
		else
			return (sc1[i] - sc2[i]);
	}
	return (sc1[i] - sc2[i]);
}
/*
//Main input >> av1: size n / av2: s1 / av3: s2
int	main(int ac, char **av)
{
	size_t	size;

	size = av[1][0] - '0';
	if (ac == 1)
	{
		printf ("No input detected");
		return (0);
	}
	printf ("s1: %s\ns2: %s\nSize: %li\nCmp: %i", av[2], 
		av[3], size, memcmp (av[2], av[3], size));
	return (0);
}*/
