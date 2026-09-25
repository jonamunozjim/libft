/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 09:57:06 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/25 14:11:51 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****************************************************************
 *								*
 * Description:							*
 * 	Allocate memory with malloc and generate a new node.	*
 * 	'Content' is initalized with 'content' parameter.	*
 *	'Next' is initialized with NULL				*
 *								*
 *	Return value:						*
 *		Pointer to the new node.			*
 *								*
 ***************************************************************/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *) malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}
/*
int	main(void)
{
	int	item[2];
	t_list	*list;

	item[0] = 0;
	item[1] = 1;
	list = ft_lstnew(item);
	printf("list.content: %i", ((int *)list->content)[0]);
	return (0);
}*/
