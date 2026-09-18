/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona <jmunoz-j@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 08:41:18 by jona              #+#    #+#             */
/*   Updated: 2026/09/18 09:02:12 by jona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char	temp[n];

	i = 0;

	while (i < n+1)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n+1)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	str[] = "Hola";
	char	out[] = "A";
	printf ("%s\n", str);
	ft_memmove (out, str, 4);
	printf("str: %s\ndest: %s\n", str, out);
	return (0);
}
