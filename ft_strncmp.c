/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:35:24 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/18 19:35:27 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
NAME
       strncmp - compare two strings

DESCRIPTION
       The strncmp() function compares only the first (at most) n bytes of s1
       and s2. It returns an integer less than, equal to, or greater than zero
       if s1 is found, respectively, to be less than, to match, or be greater
       than s2.    

RETURN VALUE
       The strncmp() functions return an integer less than, equal 
       to, or greater than zero if the first n bytes thereof is found,
       to be less than, to match, or be greater than s2.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (s1[i] == '\0' && i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	int diff;
	int diff2;
	
	//test2
	char *s1 = "ASDA";
	char *s2 = "ASDV";
	
	//test1
	char *s1 = "ABC";
	char *s2 = "AB";

	//test2
	char *s1 = "AB";
	char *s2 = "ABC";
	
	//test3
	char *s1 = "AB";
	char *s2 = "AB";
	
	//test4
	char *s1 = "ABC";
	char *s2 = "ABD";
	
	//test5
	char *s1 = "ABC";
	char *s2 = "B";
	
	diff = ft_strncmp(s1, s2, 3);
	diff2 = strncmp(s1, s2, 3);
	printf("diff %s and %s  = %d \n", s1, s2, diff);
	printf("diff2 %s and %s  = %d", s1, s2, diff2);
	//ft_print_result(ft_strncmp("test", "testss", 7));
	//ft_print_result(ft_strncmp("test\200", "test\0", 6));
	printf("%d", ft_strncmp("", "1", 0));
	
	
	//was error
	char *s1 = "ABC";
    char *s2 = "ABCD";
    
    diff = ft_strncmp(s1, s2, 3);
    diff2 = strncmp(s1, s2, 3);
    //solved
    
	return (0);
}*/
