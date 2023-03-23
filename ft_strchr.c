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
/*
DESCRIPTION
       The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.

       Here "character" means "byte"; these functions do not work with wide or
       multibyte characters.

RETURN VALUE
       The strchr() function returns a pointer  to  the  matched character
       or NULL if the character is not found.  The terminating null byte is
       considered part of the string, so that if  c  is  specified  as '\0',
       these functions return a pointer to the terminator.
*/
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
