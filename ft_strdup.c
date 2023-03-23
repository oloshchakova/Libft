/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:29:50 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 19:29:52 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       The  strdup() function returns a pointer to a new string which is 
       a duplicate of the string s.  Memory for the new string is obtained
       with malloc(3), and can be freed with free(3).
RETURN VALUE
       On success, the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with
       errno set to indicate the cause of the error.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!(s2))
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
