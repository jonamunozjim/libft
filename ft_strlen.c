/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 07:51:53 by jona              #+#    #+#             */
/*   Updated: 2026/09/21 13:31:28 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hola";

	printf ("len: %lu", ft_strlen(str));
	//printf ("ft_length: %lu\nlength: %lu",
	//	       	ft_strlen (str), strlen(str));
		return (0);
}*/
