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
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	char	tmp[2000];

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (i < n)
	{
		tmp[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = tmp[i];
		i++;
	}
	return (dest);
}
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
//really strange function with overlapping. i didnt get how it exactly works...
//my  : llllllllum dolor sit amet
//res : lorem ipum dolor sit a
