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
	char	*res;
	int		i;

	res = (char *)malloc(len);
	if (*s == '\0' || !(res))
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
