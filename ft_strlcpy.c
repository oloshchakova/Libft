/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:48:01 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 15:48:04 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
     The strlcpy() functions copy strings. strlcpy() takes the full size of
     the buffer (not just the length) and guarantee to NUL-terminate the 
     result (as long as size is larger than 0). Note that a byte for the NUL
     should be included in size. Also note that strlcpy() only operate on true
     “C” strings. This means that for strlcpy() src must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.
RETURN VALUES
     The strlcpy() function returns the total length of the string they tried
     to create.  For strlcpy() that means the length of src.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (src[i] && size - 1 > i && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	len = ft_strlen(src);
	if (size != 0)
		dst[i] = '\0';
	return (len);
}
/*
int main() {
  //char buffer[19];
  //char src[19] = "Hello there, Venus";
  char buffer2[19]; 
  char src2[19] = "lorem";
  char    *dest;
  char src3[30] = "lorem ipsum dolor sit amet";

  if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
        return (0);
  memset(dest, 0, 15);
  memset(dest, 'r', 6);  
  printf("%ld  %s", ft_strlcpy(dest, src3, 0), dest);
  printf("%ld  %s", ft_strlcpy(buffer2, src2, 15), buffer2);
  
  printf("%d", ft_strlcpy(buffer, src, 19));
  printf("%d", ft_strlcpy(buffer, src, 18));
  printf("%d", ft_strlcpy(buffer, src, 10));
  printf("%d", ft_strlcpy(buffer, src, 1));
  printf("%d", ft_strlcpy(buffer, src, 0));
  return (0);
}*/
