/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 07:47:18 by jona              #+#    #+#             */
/*   Updated: 2026/09/17 07:47:44 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

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
