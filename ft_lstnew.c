/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:11:12 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:11:18 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters content: The content to create the node with.
Return value The new node
External functs. malloc
Description Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list			*newnode;

    newnode = (t_list *)malloc(sizeof(t_list));
    if (!newnode)
        return (0);
    newnode->next = NULL;
    newnode->content = content;
    return (newnode);
}
