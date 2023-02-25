/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:11:17 by oloshcha          #+#    #+#             */
/*   Updated: 2023/02/26 00:39:40 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	my_del(void *content)
{
	(void) content;
	return ;
}

int	main(void)

{
	int	n;
	int	c;

	n = 49;
	c = 80;
	printf("isalpha %d \n", isalpha(n));
	printf("isalpha %d \n", isalpha(c));
	printf("ft_isalpha %d \n", ft_isalpha(n));
	printf("ft_isalpha %d", ft_isalpha(c));
	
	t_list	*ptr, *ptr2;
	void	*f_ptr;

	f_ptr = &my_del;

	ptr = NULL;
	printf("Adress of ptr is [%p][%p]\n", &ptr, ptr);
	ptr = (t_list *)malloc(sizeof(t_list));
	ptr->content = &n;
	ptr->next = (t_list *)malloc(sizeof(t_list));
	ptr->next->content = &c;
	ptr->next->next = NULL;

	ptr2 = ptr;
	while (ptr2 != NULL)
	{
		printf("<%d>", *(int *)(ptr2->content));
		ptr2 = ptr2->next;
	}
	printf("\n");
	

	ft_lstclear(&ptr, f_ptr);
	//free(ptr);

	return (0);
}
