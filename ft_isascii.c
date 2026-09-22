/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:28:48 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:29:14 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
