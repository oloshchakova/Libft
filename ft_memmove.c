/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:31:46 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:31:48 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
NAME
       memmove - copy memory area

DESCRIPTION
       The memmove() function copies n bytes from memory area src to memory
       area dest. The memory areas may overlap: copying takes place as though
       the bytes in src are first copied into a temporary array that does not
       overlap src or dest, and the bytes are then copied from the temporary
       array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (ptr_dest <= ptr_src)
	{
		i = 0;
		while (i < n)
		{
			*(ptr_dest + i) = *(ptr_src + i);
			i++;
		}
	}
	else if (ptr_dest > ptr_src)
	{
		while (n-- > 0)
			*(ptr_dest + n) = *(ptr_src + n);
	}
	return (dest);
}
/*
int main(void)
{
    char    src[] = "abcdef0000";
    char    *dest;

    dest = src + 3;
    ft_memmove(dest, src, 4);
    printf("%s", dest);
    return (0);
}
*/

/*
int main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	ft_memmove(dest, src, 8);
	printf("%s", dest);
	return (0);
}*/
