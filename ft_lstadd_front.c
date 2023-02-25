/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:11:42 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:11:44 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the beginning of the list.
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new.next = *lst;
	*lst = new;
}
