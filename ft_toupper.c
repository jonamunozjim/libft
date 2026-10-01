/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:38:18 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:38:26 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
