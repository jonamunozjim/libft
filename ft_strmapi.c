/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:10:07 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/24 13:59:21 by jmunoz-j         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(s);
	strmapi = malloc ((size + 1) * sizeof(char));
	while (s[i])
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
}
