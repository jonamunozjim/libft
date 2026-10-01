/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:58:30 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 15:48:06 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 * 								*
 * Description:							*
 * 	Allocate memory with malloc and return a substring 	*
 * 	from 's'						*
 *	Substring starts in 'start' with a max length 'len'	*
 *								*
 * Return value:						*
 * 	Substring.						*
 *								*
 * 	NULL if memory allocate fails				*
 * 								*
 ***************************************************************/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (start >= ft_strlen(s))
		len = 0;
	i = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	unsigned int	start;
	size_t	len;
	char	s[] = "Hola que tal";
	
	start = 30;
	len = 50;
	printf ("Str: %s\nSub: %s\n", s, ft_substr (s, start, len));
	return (0);
}	
*/
