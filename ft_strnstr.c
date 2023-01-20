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

char	ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1[i])
		return (0);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && j < n)
		{
			j++;
		}
		i++;
	}
	return (s1[i]);
}
