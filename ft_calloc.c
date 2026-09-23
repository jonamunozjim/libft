/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:46:57 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/23 13:15:45 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 * 								*
 *  Description:						*
 *  	Allocates memory from an array of nmemb elements of 	*
 *  	size bytes and return a pointer to the allocated memory *
 *  								*
 *  Return value:						*
 *  	Memory is set to zero.					*
 *  	If nmemb or size is 0, ft_calloc() return NULL		*
 *								*
 ***************************************************************/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * sizeof(size));
	ft_bzero (s, nmemb);
	return ((void *)s);
}
/*
int	main(void)
{
	unsigned char *s;
	unsigned int	i;

	i = 0;
	s = ft_calloc(8, sizeof(unsigned char));
	s[5] = 'a';
	while (i < 10)
	{
		if(s[i] == '\0')
		{	
			printf("n");
		}
		printf("%c", s[i]);
		i++;
	}
	return (0);
}*/
