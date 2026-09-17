/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 07:48:29 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 07:48:39 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
