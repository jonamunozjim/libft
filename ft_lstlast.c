/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:58:09 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/28 11:30:06 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// 	Return the last node of a list
//
// Parameters:
// 	First node list
//
// Retyrb value:
// 	Last node list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*root;
	t_list	*lst;

	root = ft_lstnew ("111");
	lst = ft_lstnew("2");
	printf("Before\nroot: %p\nroot->next: %p\n\nlst: %p\nlst->next: %p\n\n", 
		root, root->next, lst, lst->next);
        ft_lstadd_front(&root, lst);
	printf("----After\nroot: %p\nroot->next: %p\n\nroot-next-next: %p\n", 
		root, root->next, root->next->next);
	printf("%p", root->next->next);
	return (0);
}*/
