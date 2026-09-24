/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:09:44 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/24 14:16:53 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *								*
 * Description:							*
 * 	Send 'c' char to the specified file descriptor		*
 *								*
 * Return value: 						*
 * 	No value.						*					 *
 * *************************************************************/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int	fd;

	fd = 1;
	c = 'f';
	ft_putchar_fd(c, fd);
	return(0);
}*/
