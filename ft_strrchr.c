/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:32:27 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:32:29 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0' && s[i] == c)
		return ((char *)(s + i));
	else if (j != 0)
		return ((char *)(s + j));
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_strchr("o.lo@gmail.com", '.'));
	printf("%s", ft_strrchr("o.lo@gmail.com", '.'));
	return (0);
}*/
