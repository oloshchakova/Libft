/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:13:28 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/09 20:13:29 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters       lst: The address of a pointer to a node.
                 f: The address of the function used to iterate on the list.
Return value     None
External functs. None
Description      Iterates the list ’lst’ and applies the function
                 ’f’ on the content of each node.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
