/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:36:24 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/25 14:33:27 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description:
 * 	Add node "new" to the first position of "lst"
 *
 * Parameters:
 * 	lst > memory address of first node ptr
 * 	new > A ptr to node added at the first list item
 *
 * Return value:
 * 	No value
 *
 * */

#include "libft.h"

void	*ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	new -> next = *lst;
	*lst = new;
	return (new);
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	char	s[] = "aa";
	char	u[] = "bb";
	
	lst = ft_lstnew(s);
	new = ft_lstnew(u);
	printf("Before:\nItem1: %s\nItem2: %s\n", 
		(char *)lst->content, (char *)new->content);
	ft_lstadd_front(&lst, new);
	new = lst->next;
	printf("After:\nItem1: %s\nItem2: %s\n", 
		(char *)lst->content, (char *)new->content);
	return (0);
}*/
