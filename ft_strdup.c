/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:16:15 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 13:35:36 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *								*
 *  Description:						*
 *  	Return a pointer to a new string wich is a copy of the	*
 *  	string s. Memory of the new string is obtained with 	*
 *  	malloc.							*
 *								*
 *  Return value:						*
 *  	On success, return a pointer to the duplicated string.	*	
 *	It returns NULL if insufficient memory was available	*
 *								*
 ***************************************************************/

#include "libft.h"

char	*strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen (s) + 1;
	dup = malloc(len * sizeof(char));
	ft_strlcpy(dup, s, len);
	return (dup);
}
/*
int	main(void)
{
	char	s[] = "Hola";
	char	*dup;

	dup = strdup (s);
	printf ("Str: %s\nDup: %s", s, dup);
	return (0);
}*/	
