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
/*
PARAMETERS 		s: The string to be split.
				c: The delimiter character.
RETURN VALUE	The array of new strings resulting from the split.
				NULL if the allocation fails.
EXTERNAL FUN.	malloc, free
DESCRIPTION		Allocates (with malloc(3)) and returns an array
				of strings obtained by splitting ’s’ using the
				character ’c’ as a delimiter. The array must end
				with a NULL pointer.
*/
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
	int			nb_words;
	int			len_wrd;

	if (str == NULL)
		return (NULL);
	nb_words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (NULL);
	res[nb_words] = NULL;
	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (res);
		len_wrd = count_ch(str, i, c);
		res[nb_words++] = mem_str(str, i, len_wrd);
		i += len_wrd;
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
/*
nt main() {
  char    **expected = ft_split("\0aa\0bbb", '\0');
  for (int i = 0; expected[i]; i++)
  {
    if (expected[i] != NULL)
      printf("TEST FAILED");
  }
  return 0;
}
*/
