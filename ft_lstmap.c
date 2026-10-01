/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz-j <jmunoz-j@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 09:29:37 by jmunoz-j          #+#    #+#             */
/*   Updated: 2026/09/29 15:47:12 by jmunoz-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description:
// 	Iterates 'lst' list and apply 'f' function to each node content.
// 
// Parameters:
// 	lst, ptr to a node.
// 	f, ptr dir to a function
// 	del, ptr to a function to delete a node content, when needed.
//
// Return value:
// 	New list.
// 	NULL if memory allocation fails.

#include "libft.h"

/*void	del(void *ptr)
{
	free(ptr);
}
*/
//void	del(void *ptr);

/*static void	*f_to_upper(void *content)
{
	char	*new_str;
	int		i;

	new_str = ft_strdup(content);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] = new_str[i] - 32;
		i++;
	}
	return ((char *)new_str);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back (&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	lst = ft_lstnew("a");
	lst->next = ft_lstnew("b");
	lst->next->next = ft_lstnew("c");
	lst->next->next->next = ft_lstnew("d");
	printf("lst: %s %s %s %s\n-----\n", (char *)lst->content, 
			(char *)lst->next->content, 
			(char *)lst->next->next->content, 
			(char *)lst->next->next->next->content);
	new_lst = ft_lstmap(lst, f_to_upper, del);
	printf("\n------------------------\n");
	printf("New_lst: %s\n", (char *)new_lst->content);
	printf("new_lst: %s\n", (char *)new_lst->next->content);
	printf("New_lst: %s\n", (char *)new_lst->next->next->content);
	printf("New_lst: %s\n", (char *)new_lst->next->next->next->content);
	ft_lstclear(&lst,del);
	ft_lstclear(&new_lst,del);
	return (0);
}*/
