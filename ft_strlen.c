/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:36:41 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:37:12 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hola";

	printf ("len: %lu", ft_strlen(str));
	//printf ("ft_length: %lu\nlength: %lu",
	//	       	ft_strlen (str), strlen(str));
		return (0);
}*/
