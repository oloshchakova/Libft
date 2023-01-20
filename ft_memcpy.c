/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:33:10 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:33:14 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	if ()
		memmove();
	return (dest);
}
