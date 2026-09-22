/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:04:26 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 14:26:14 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (i < n))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main (void)
{
	char	*s1 = "Hola";
	char	*s2 = "Hola";

	printf ("%i\n", ft_strncmp(s1, s2, 3));
	return (0);
}*/
