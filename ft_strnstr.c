/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:27:09 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/30 12:59:24 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] == big [i + j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				else
					j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	len;
	char	big[] = "lorem ipsum dolor sit amet";
	char	little[] = "ipsum";

	len = 10;
	printf ("Len: %i\nBig: %s\nLittle: %s\nFound: %s\n", 
	len, big, little,ft_strnstr(big, little, len));
	printf("ptr: %p\n", ft_strnstr(big, little, len));
	return (0);
}*/
