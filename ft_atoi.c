/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:07:29 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 12:45:31 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// Converts initial position of the string pointed by nptr to int.
//
//  Return value:
//  	Converted value or 0 on error.

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	output;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	output = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		output = output * 10 + (nptr[i] - '0');
		i++;
	}
	return (output * sign);
}
/*
int	main(int ac, char **av)
{
	if (ac == 1)
	{
		printf("No input detected\n");
		return (0);
	}
	printf("Str: %s\nft_atoi: %i\n", av[1], ft_atoi(av[1]));
	return (0);
}
*/
