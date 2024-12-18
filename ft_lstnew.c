/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <rcurty-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:20:40 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/12/18 14:20:41 by rcurty-g         ###   ########.fr       */
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
