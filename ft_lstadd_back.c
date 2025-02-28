/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raissacurty <raissacurty@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:37:43 by raissacurty       #+#    #+#             */
/*   Updated: 2024/12/14 23:41:03 by raissacurty      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add the new node at the end of the list
// lst -> Ptr to the first link of a list
// new -> Ptr to the node to be added

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
