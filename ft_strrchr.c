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
/*
DESCRIPTION
       The strrchr() function returns a pointer to the last occurrence of  the
       character c in the string s.

       Here "character" means "byte"; these functions do not work with wide or
       multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character  or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (c == '\0' && s[i] == (char)c)
		return ((char *)(s + i));
	else if (j != -1)
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
