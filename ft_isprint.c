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

#include "libft.h"

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 176)
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
