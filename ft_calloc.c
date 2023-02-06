/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:29:33 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 19:29:34 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	long long	tot_size;
	void		*p;

	tot_size = size * nmemb;
	if (tot_size / size != nmemb)
		return (NULL);
	p = (void *)malloc(tot_size);
	if (p != NULL)
	{
		ft_memset(p, 0, tot_size);
	}
	return (p);
}
