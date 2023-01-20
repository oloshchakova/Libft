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

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
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
	return (0);
}*/
