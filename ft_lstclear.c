/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:47:07 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 17:50:12 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// 	Delete and free node 'lst' and all consectuive nodes
// 	using 'del' and 'free()'
//
// Parameters:
// 	lst, ptr to a node
// 	del: ptr to a function used to delete the node content
//
// Return value:
// 	No value

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = temp;
	}
}
/*
int	main(void)
{
	t_list	*root;

	root = ft_lstnew(ft_("a"));
	root->next = ft_lstnew(("b"));
	root->next->next = ft_lstnew(("c"));
	ft_lstclear(&root, del);
	return(0);
}*/
