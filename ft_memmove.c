/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:22:57 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/21 14:00:24 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	temp[n];
	
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
	i = 0;
	if (temp <= ((unsigned char *)src))
	{
		while (i < n)
		{
			temp[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0) 
		{
			temp[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	if (((unsigned char *)dest) <= temp)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = temp[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i] = temp[i];
			 i--;
		}
	}
	return (dest);
}

int	main(void)
{
	char	str[] = "Hola";
	char	out[] = "Abc";
	ft_memmove (out, str, 2);
	printf("str: %s\ndest: %s\n", str, out);
	return (0);
}
