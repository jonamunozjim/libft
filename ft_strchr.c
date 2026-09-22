/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:02:44 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 13:45:05 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return a pointer to the first occurrence of the character 
 *c in the string s, or NULL if the character is not found. 
 
If c is '\0' it returns a pointer to the terminator
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	if (c == '\0')
	{
		return (&((char *)s)[len + 1]);
	}
	else
	{
		while (s[i])
		{
			if (s[i] == c)
				return (&((char *)s)[i]);
			else
				i++;
		}
	}
	return (&((char *)s)[i]);
}
/*
int	main(void)
{
	char	s[] = "Hola que tal";
	char	*out;
	char	c;

	c = 'a';
	out = ft_strchr (s, c);
	printf ("%s\n", out);
	return (0);
}*/
