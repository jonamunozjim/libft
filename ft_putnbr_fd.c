/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:38:25 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/25 09:35:54 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *                                                              *
 * Description:                                                 *
 *      Write 'n' int to the specified file descriptor          *
 *                                                              *
 * Return value:                                                *
 *      No value.                                               *
 **/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
	free (s);
}
/*
int	main(void)
{
	int	fd;
	int	n;

	fd = 1;
	n = -348;
	ft_putnbr_fd(n, fd);
	return (0);
}*/
