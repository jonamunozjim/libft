/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:30:27 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 10:28:32 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description:
//	Add node 'new' to the 'lst' end
//
// Parameters:
// 	lst, ptr to the first 'lst' node
// 	new, ptr to a node added to the list
//

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	
	lst = ft_lstnew("a");
	new = ft_lstnew("b");
	n
	printf("lst: %p\nlst-n: %p\n\nnew: %p\nnew-n: %p\n", 
		lst, lst->next, new, new->next);
	ft_lstadd_back(&lst, new);
	printf("-------after\nlst: %p\nlst-next: %p\n lst-next-next: %p\n", 
		lst, lst->next, lst->next->next);
	return (0);
}*/
