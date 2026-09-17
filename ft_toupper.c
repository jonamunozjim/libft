/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 08:05:12 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 08:05:34 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf ("toupper: %c\n", toupper (av[1][0]));
	printf ("ft_toupper: %c\n", ft_toupper (av[1][0]));
	return (0);
}*/
