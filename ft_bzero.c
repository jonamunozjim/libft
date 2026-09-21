/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:47:32 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/21 12:47:34 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hola";
	
	printf ("Str: %s", str);
	ft_bzero (str, 4);
	printf("Str_clean: %s", str);
	return (0);
}*/
