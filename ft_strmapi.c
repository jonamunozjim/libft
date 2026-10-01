/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:10:07 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 17:45:08 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***********************************************
 * 
 * Description:
 * 	Apply a 'f' function to each character of a string	*
 *	
 * Return value:
 * 	New string after 'f'
 * 	NULL if memory allocation fails
 *
 ****************************************************************/

#include "libft.h"

/*static char	f_testing(unsigned int i, char c)
{
	if (i%2)
		return (c);
	else
		return ('0');
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;
	size_t			size;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	out = malloc ((size + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
/*
int	main (void)
{
	char	s[] = "Hola";
	char	*mapi;

	mapi = ft_strmapi (s, f_testing);
	printf("Str: %s\nMapi: %s\n", s, mapi);
	free (mapi);
	return (0);
}*/
