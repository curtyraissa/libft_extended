/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <rcurty-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:20:30 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/12/18 14:20:31 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list and applies f, creating a new list. 
//            Deletes the content of a node if needed.
// lst    -> Ptr to the node to iterate
// f      -> Ptr to the function used to iterate the list
// del    -> Ptr to the function used to delete the content of a node
// return -> Ptr to the new list

static t_list	*ft_newl(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*content;

	if (!list || !f || !del)
		return (NULL);
	content = f(list->content);
	new_lst = ft_lstnew(content);
	if (!new_lst)
	{
		del(content);
		return (NULL);
	}
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;

	new_lst = ft_newl(lst, f, del);
	if (!new_lst)
		return (NULL);
	head = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (!new_lst->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	new_lst->next = NULL;
	return (head);
}
