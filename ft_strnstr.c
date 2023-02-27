/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:31:23 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:31:28 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL && n == 0)
		return (NULL);
	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n && s1[i + j])
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
/*
#include <unistd.h>

void    ft_print_result(char const *s)
{
    int        len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

int main(void)
{
	ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)))  
	ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30))) //NULL
	ft_strnstr("lorem ipsum dolor sit amet", "sit", 10)))    //NULL
	printf("%s", ft_strnstr(empty, "", -1));//empty
  //printf("%s", ft_strnstr(empty, "", 0));//empty
}
*/
