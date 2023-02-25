/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:12:22 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:12:24 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters       lst: The beginning of the list.
Return value     Last node of the list
External functs. None
Description      Returns the last node of the list.
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return (lst);
}
