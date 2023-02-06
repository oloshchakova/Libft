/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:32:44 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:32:48 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0' && s[i] == (char)c)
		return ((char *)(s + i));
	else
		return (0);
}
/*
int main(void)
{
    char        *str;
    char        str2[] = "bonjour";
    

    if (!(str = ft_strchr(str2, 'b')))
      printf("%s", "NULL");
    else
    {
      printf("%s", str);
      if (str != str2)
        printf("%s", "\nReturn value is false");
    }
	printf("%s", ft_strchr(s, 't' + 256));
    return (0);
}*/