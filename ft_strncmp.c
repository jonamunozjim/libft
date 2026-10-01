/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:04:26 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 11:57:47 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && (i < (n - 1)))
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)s2[i]);
}
/*
int	main (void)
{
	char	*s1 = "abcdef";
	char	*s2 = "nabc";
	size_t	size;

	size = 1;
	printf ("%i\n", ft_strncmp(s1, s2, size));
	return (0);
}*/
