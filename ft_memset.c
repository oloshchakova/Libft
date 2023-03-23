/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:05:22 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/09 16:05:27 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
NAME
       memset - fill memory with a constant byte

DESCRIPTION
       The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
int main (void)
{
	char arr[20] = {97, 97, 97, 97};
	char c;
	char d;

	printf("[%d]\n", *(int *)arr);
	c = 'a';
	d = 'b';
	//memset(arr, c, 10);
	for(int i = 0; i < 32; ++i)
	{
		printf("index = %d, value = [%d]\n", i, arr[i]);
	}
	ft_memset(arr + 10, d, 10);


	for(int i = 0; i < 32; ++i)
	{
		printf("index = %d, value = [%d]\n", i, arr[i]);
	}
	return (0);
}*/
