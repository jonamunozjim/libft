/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:30:19 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 09:32:35 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
//	Check if a character is printable character.
//
//	Parameters:
//		c, character to be checked.
//
//	Return value:
//		1, if True
//		0, if False

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("ft_isprint:%i\n", ft_isprint('a'));
	printf("isprint: %i", isprint('a'));
	printf("\n----\n");
	printf("ft_isprint: %i\n", ft_isprint('\0'));
	printf("isprint: %i", isprint('\0'));
}*/
