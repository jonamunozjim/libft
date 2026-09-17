/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 08:06:00 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 08:06:11 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("tolower: %c\n", tolower (av[1][0]));
	printf("ft_tolower: %c\n", ft_tolower (av[1][0]));
	return (0);
}*/
