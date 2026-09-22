/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:29:27 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 10:33:45 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		printf("Error");
	else
	{
		printf("ft_isdigit: %i", ft_isdigit(av[1][0]));
		printf("\nisdigit: %i", isdigit(av[1][0]));
	}
	return (0);
}*/
