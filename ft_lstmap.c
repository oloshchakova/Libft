/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:13:47 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:13:51 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters       lst: The address of a pointer to a node.
                 f: The address of the function used to iterate on the list.
                 del: The address of the function used to delete the content
                 of a node if needed.
Return value     The new list.
                 NULL if the allocation fails.
External functs. malloc, free
Description      Iterates the list ’lst’ and applies the function
                 ’f’ on the content of each node. Creates a new
                 list resulting of the successive applications of
                 the function ’f’. The ’del’ function is used to
                 delete the content of a node if needed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (f == NULL || lst == NULL || del == NULL)
		return ;
}
