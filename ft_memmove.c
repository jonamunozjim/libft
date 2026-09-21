/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:22:57 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/21 13:21:42 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*temp;

	if (dest == NULL || src == NULL)
		return (NULL);
	temp = ((unsigned char *)src);
	i = 0;
	if ( temp <= ((unsigned char *)dest))
	{
		while (i < n)
		{
			temp[i] = ((unsigned char *)dest)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (n > 0) 
		{
			temp[i] = ((unsigned char *)dest)[i];
			n--;
		}
	}
	return (dest);
}

int	main(void)
{
	char	str[] = "Hola";
	char	out[] = "Abc";
	ft_memmove (out, str, 3);
	printf("str: %s\ndest: %s\n", str, out);
	return (0);
}
