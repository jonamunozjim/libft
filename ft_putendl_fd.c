/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:25:46 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/24 14:36:56 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *                                                              *
 * Description:                                                 *
 *      Send 's' string to the specified file descriptor,	*
 *      followed of a \n 					*
 *                                                              *
 * Return value:                                                *
 *      No value.                                               * 
 *      							*
 * * ***********************************************************/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char	s[] = "Hola que tal";
	int	fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}*/
