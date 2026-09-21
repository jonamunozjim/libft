/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:22:57 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/21 14:14:19 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char	temp[n];
	int	j;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (temp <= ((unsigned char *)src))
	{
		j = n;
		while (i < j)
		{
			temp[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i >= 0) 
		{
			temp[j] = ((unsigned char *)src)[i];
			i--;
			j++;
		}
	}

/********/
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
