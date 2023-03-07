/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:13:47 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/26 00:10:19 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS       lst: The address of a pointer to a node.
                 f: The address of the function used to iterate on the list.
                 del: The address of the function used to delete the content
                 of a node if needed.
RETURN VALUE     The new list.
                 NULL if the allocation fails.
EXTERNAL FUN.	 malloc, free
DESCRIPTION      Iterates the list ’lst’ and applies the function
                 ’f’ on the content of each node. Creates a new
                 list resulting of the successive applications of
                 the function ’f’. The ’del’ function is used to
                 delete the content of a node if needed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	

	if (f == NULL || lst == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(new_node->content, del);
			return (NULL);
		}
		
	}
	
	return (NULL);
}
