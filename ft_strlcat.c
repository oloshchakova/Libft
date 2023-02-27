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
/*
NAME
     strlcat — size-bounded string copying and concatenation

DESCRIPTION
     The strlcat() function concatenates strings. Unlike strncat(),strlcat() 
     takes the full size of the buffer (not just the length) and guarantee to
     NUL-terminate the result (in the case of strlcat(), as long as there is at
     least one byte free in dst). Note that a byte for the NUL should be 
     included in size. Also note that strlcat() only operates on true “C” 
     strings. This means that both src and dst must be NUL-terminated.

     The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcat() functions return the total length of the
     string they tried to create.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.

     Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a proper “C” string).  The check exists to pre‐
     vent potential security problems in incorrect code.
*/
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
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
