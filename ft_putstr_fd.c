/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:19:58 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/24 14:24:11 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *                                                              *
 * Description:                                                 *
 *      Send 's' string to the specified file descriptor        *
 *                                                              *
 * Return value:                                                *
 *      No value.                                               * 
 *								*
 * *************************************************************/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "Hola que tal";
	int	fd;
	
	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}*/
