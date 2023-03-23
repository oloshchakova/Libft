/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:49:47 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:49:48 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS           s1: The string to be trimmed.
                     set: The reference set of characters to trim.
RETURN VALUE         The trimmed string. NULL if the allocation fails.
EXTERNAL FUN.        malloc
DESCRIPTION          Allocates (with malloc(3)) and returns a copy of ’s1’ with 
                     the characters specified in ’set’ removed from the 
                     beginning and the end of the string.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
	{
		start++;
	}
	while (s1[start] && end > 0 && ft_strchr(set, s1[end - 1]) != 0)
	{
		end--;
	}
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (0);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

/*
#include <stdlib.h>
#include <unistd.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main() {
	//printf("%s", ft_strtrim("   xxx   xxx", " x"));
    //printf("%s", ft_strtrim("", "123"));
    //printf("%s", ft_strtrim("abcdba", "acb"));
    char    *strtrim;
    char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    if (!(strtrim = ft_strtrim(s1, " ")))
            ft_print_result("NULL");
    else
            ft_print_result(strtrim);
    if (strtrim == s1)
            ft_print_result("\nA new string was not returned");
  return 0;
}*/
