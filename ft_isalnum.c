/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:27:29 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 17:41:30 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
//	Check if a character is alphanumeric.
//
//	Parameters:
//		c, character to be checked.
//
//	Return value:
//		1, if True
//		0, if False

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("isalnum: %i\n", isalnum(av[1][0]));
	printf("ft_isalnum: %i\n", ft_isalnum(av[1][0]));
	return (0);

}*/
