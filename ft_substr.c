/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:43:40 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:43:42 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	size_t			i;
	unsigned int	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		res = (char *)malloc(sizeof(char));
		if (!res)
			return (0);
		res[0] = '\0';
		return (res);
	}
	if (len_s - start <= len)
		len = len_s - start;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (*s == '\0' || !(res))
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*char * s = ft_substr("tripouille", 0, 42000);
  printf("%s",s);
  //mcheck(s, strlen("tripouille") + 1); 
  //free(s);*/
