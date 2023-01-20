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

void	*calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * nmemb;
	dst = (void *)malloc(tot_size);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
