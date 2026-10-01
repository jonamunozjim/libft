/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:58:09 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 10:34:44 by jmunoz-j         ###   ########.fr       */
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
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("a");
	lst->next = ft_lstnew("b");
	lst->next->next = ft_lstnew("c");
	printf("lst: %p\n", (char *)lst);
	printf("lst2: %p\n", (char *)lst->next);
	printf("lst3: %p\n", (char *)lst->next->next);
	printf("\nLast: %p\n", ft_lstlast(lst));
	return (0);
}*/
