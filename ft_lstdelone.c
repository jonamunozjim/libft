/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:53:29 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/28 15:41:43 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// 	Receive node 'lst' and free the content using 'del' function.
// 	Free memory of the node.
//
// Parameters:
// 	lst, node to be free
// 	del, ptr to a function to free the node content.
//
// Return value:
// 	No value

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
/*
int	main(void)
{
	t_list	*lst;
	char	*s;
	
	s =  ("Hola");
	lst = ft_lstnew(s);
	lst->next = ft_lstnew(s);
	printf("Content0: %s\nContent1: %s\n", 
		(char *)lst->content, (char *)lst->next->content);
	ft_lstdelone(lst->next, del);
	printf("after delone");
	free (lst);
	return (0);
}*/
