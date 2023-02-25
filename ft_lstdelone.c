/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:12:54 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:12:56 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters       lst: The node to free.
                 del: The address of the function used to delete the content.
Return value     None
External functs. free
Description      Takes as a parameter a node and frees the memory of the node’s
				 content using the function ’del’ given as a parameter and free
				 the node. The memory of ’next’ must not be freed.
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	lst->next = NULL;
	free(lst);
}
