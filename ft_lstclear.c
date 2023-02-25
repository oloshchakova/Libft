/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:13:10 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/26 00:20:03 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters       lst: The address of a pointer to a node.
                 del: The address of the function used 
                 to delete the content of the node.
Return value     None
External functs. free
Description      Deletes and frees the given node and every successor 
				 of that node, using the function ’del’ and free(3).
				 Finally, the pointer to the list must be set to NULL.

*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	ft_lstclear(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
	return ;
}
