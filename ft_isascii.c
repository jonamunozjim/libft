/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 07:48:02 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 07:48:14 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_isascci: %i", ft_isascii(av[1][0]));
		printf("\nisascii: %i\n", isascii(av[1][0]));
	}
	else
		printf("\n");
	return (0);
}*/
