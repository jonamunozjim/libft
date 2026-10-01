/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:01:38 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 17:24:07 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************
 *								*
 * Description:							*
 * 	Allocate memory with malloc and returns a string	*
 * 	representing a int value received as an argument.	*
 * 	Negative numbers should be handled.			*
 *								*
 * Return value:						*
 * 	On success, The int value as String			*
 * 	NULL if memory allocation fails				*
 *								*
 ***************************************************************/

#include "libft.h"

static	int	int_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

static void	fill_str(char *str, int n, int len)
{
	if (len == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
}

static void	convert_int_to_char(char *str, long int num, int len)
{
	if (num == 0)
		str[0] = '0';
	else
	{
		while (num != 0)
		{
			len--;
			str[len] = (num % 10) + '0';
			num = num / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	int			len;
	long int	num;
	char		*out;

	num = n;
	len = int_len (n);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	out = malloc ((len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	fill_str(out, n, len);
	convert_int_to_char(out, num, len);
	return (out);
}
/*
int	main(void)
{
	int	n;
	char	*result;
	n = -348;

	result = ft_itoa (n);
	printf("Int: %i\nft_itoa: %s\n", n, result);
	free (result);
	return (0);
}*/