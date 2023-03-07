/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:00:41 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:00:44 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

int	count_ch(char const *str, int i, char c)
{
	int	n;

	n = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

char	*mem_str(char const *str, int i, int len)
{
	char	*res;
	int		j;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (j < len)
	{
		res[j] = str[i + j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char const *str, char c)
{
	char		**res;
	int			i;
	int			j;
	int			nb_words;
	int			len_wrd;

	i = 0;
	nb_words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (NULL);
	res[nb_words] = NULL;
	if (str[i] == '\0')
		return (res);
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		len_wrd = count_ch(str, i, c);
		if (len_wrd == 0)
			return (res);
		res[j] = mem_str(str, i, len_wrd);
		i += len_wrd;
		j++;
	}
	return (res);
}
/*
int main(void)
{
    char str[] = ",Hi , ,   , hi , hi ";
    char *res;
    
    res = ft_split(str, ',');
    printf("%s", res);
    return (0);
}*/
