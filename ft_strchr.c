/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:02:44 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 15:26:36 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return a pointer to the first occurrence of the character 
 *c in the string s, or NULL if the character is not found. 
 
If c is '\0' it returns a pointer to the terminator
*/
#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	if (c == '\0')
	{
		return (&((char *)s)[len]);
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
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "213";
	char	*out;
	char	c;

	c = '\0';
	out = ft_strchr (s, c);
	//if (out == NULL)
	//	return (NULL);
	printf ("%s\n", out);
	return (0);
}*/