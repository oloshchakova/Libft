/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:48:23 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 15:48:25 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr;

	ptr = dst;
	ptr = ptr + ft_strlen(dst);
	while (*src != '\0' && (size - ft_strlen(dst) - 1) > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (sizeof(dst));
}
