/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:00:34 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 17:48:00 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description:
 * 	Apply a 'f' function to each character of a string 's', giving
 * 	the 'i' and the dir of each character,
 *
 * Return value:
 *	No value.
 *
 *	************************************************************* */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
