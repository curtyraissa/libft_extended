/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissacurty <raissacurty@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:50:20 by raissacurty       #+#    #+#             */
/*   Updated: 2024/12/14 23:50:33 by raissacurty      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocate and return a new node
// content -> Ptr to the content to creat the new node with
// return  -> Success (ptr to new node)

t_list	*ft_lstnew(void *content)
{
	t_list	*mynode;

	mynode = (t_list *)malloc(sizeof(t_list));
	if (!mynode)
		return (NULL);
	mynode->content = content;
	mynode->next = NULL;
	return (mynode);
}
