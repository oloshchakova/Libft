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
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (size > len_dst + 1)
	{
		while (src[j] != '\0' && size > i + 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (size <= len_dst)
		len_dst = size;
	return (len_dst + len_src);
}
/*
int main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	ft_memset(dest, 0, 15);
	ft_memset(dest, 'r', 6);
	//dest[11] = 'a';
	//printf("%ld  %s", ft_strlcat(dest, "lorem", 15), dest);

	//dest[14] = 'a';
	//printf("%ld  %s", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15), dest);

	//dest[10] = 'a';
	//printf("%ld  %s", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0), dest);

	ft_memset(dest, 'r', 15);
	printf("%ld  %s", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
	return (0);
}*/