/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissacurty <raissacurty@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:39:13 by raissacurty       #+#    #+#             */
/*   Updated: 2024/12/14 23:40:41 by raissacurty      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add new node to the beginning of the list
// lst -> Ptr to the first link of a list
// new -> Ptr to the node to be added

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
