/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:13:04 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/22 13:51:57 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return a pointer to the last occurrence of the character 
 * c in the string s, or NULL if the character is not found. 
 *                                                            
 * If c is '\0' it returns a pointer to the terminator.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen (s);
	if (c == '\0')
		return (&((char *)s)[i]);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		else
			i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Hola que tal";
	char	*out;
	char	c;

	c = 'q';
	out = ft_strrchr (s, c);
	if (out == NULL)
		printf ("Not found\n");
	else
		printf ("%s\n", out);
	return (0);
}*/
