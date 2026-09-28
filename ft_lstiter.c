/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:47:08 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/28 16:04:31 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// 	list 'lst' iteration applying 'f' on each node content
//
// Parameters:
// 	lst, ptr to first node
// 	f, ptr to the function used on each node
//
// Return value:
// 	No value

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return NULL;
	while(lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
int	main(void)
{
	t_list	*root;
	t_list	*temp;

	root = ft_lstnew(strdup("aaa"));
	root->next = ft_lstnew(strdup("bbb"));
	temp = root;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(root, r);

	free (root->next);
	free (root);
	free (temp);
	return (0);
}*/

