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

char  *ft_strchr(const char *s, int c)
{
  int i;
  
  i = 0;
  while (*s)
  {
    if (s[i] == c)
     
    i++;
      
  }
  return (0);
}

char    *ft_strtrim(char const *s, char const *set)
{
    int    i;
    int	j;
    char *res;

    i = 0;
    j = 0;
    if (*s == '\0' || *set == '\0' || (res = (char *)malloc(strlen(s) * sizeof(char))))
        return (0);
    while (*s)
    {
        while (set[i])
        {
            if (*s == set[i])
                s++;
            i++;
        }
        if (set[i] == '\0')
            break ;
    }
    i = strlen(s);
    while (i > 0 && s[i] == set[j])
    {
        i--;
    }
}

/*
int main() {

  printf("%s", ft_strtrim("aachiacb", "abc"));
  return 0;
}*/