/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:35:11 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/25 14:47:04 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *
 * Description:
 * 	Count number of nodes.
 *
 * Parameters:
 * 	lst: list head
 *
 * Return value:
 * 	List length
 *
 * */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
