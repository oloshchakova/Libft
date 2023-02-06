/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:47:37 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/29 21:47:38 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	sign_nb(char *str, int idx)
{
	int	sign;

	sign = 1;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign = -1;
		else if (str[idx] == '+')
			sign = 1;
		idx++;
		if ((str[idx] < 48 || str[idx] > 57) && str[idx] != '\0')
			return (0);
	}
	return (sign);
}

int	idx_to_nb(char *str, int idx)
{
	while (str[idx] == '-' || str[idx] == '+')
		idx++;
	return (idx);
}

int	process_nb(char *str, int idx)
{
	int	res;

	res = 0;
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		res = res * 10 + str[idx] - '0';
		idx++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	res;

	if (*str == '\0')
		return (0);
	res = 0;
	idx = ft_isspace(str);
	sign = sign_nb(str, idx);
	idx = idx_to_nb(str, idx);
	if (sign == 0)
		return (0);
	else
	{
		if (str[idx] >= 48 && str[idx] <= 57)
		{
			res = process_nb(str, idx);
		}
		else
			return (0);
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main()
{
  //printf("%d",ft_atoi("0"));
  //printf("%d",ft_atoi("546:5"));
  //printf("%d",ft_atoi("-4886"));
  //printf("%d",ft_atoi("+548"));
  //printf("%d",ft_atoi("054854"));
  //printf("%d",ft_atoi("000074"));
  //printf("%d",ft_atoi("+-54"));
  //printf("%d",ft_atoi("-+48"));
  //printf("%d",ft_atoi("--47"));
  //printf("%d",ft_atoi("++47"));
  //printf("%d",ft_atoi("+47+5"));
  //printf("%d",ft_atoi("-47-5"));
  //printf("%d",ft_atoi("\e475"));
  //printf("%d",ft_atoi("\t\n\r\v\f  469 \n"));
  //printf("%d",ft_atoi("-2147483648"));
  //printf("%d",ft_atoi("2147483647"));
  //printf("%d",ft_atoi("\t\n\r\v\fd469 \n"));
  //printf("%d",ft_atoi("\n\n\n  -46\b9 \n5d6"));
  //printf("%d",ft_atoi(""));
  printf("%d",ft_atoi("1"));
  printf("%d",ft_atoi("1a"));
  printf("%d",ft_atoi("a1"));

	
	char escape[] = {9, 10, 11, 12, 13, 0};
	string e(escape);
	check(ft_atoi((e + "1").c_str()) == 1); showLeaks();
	check(ft_atoi((e + "a1").c_str()) == 0); showLeaks();
	check(ft_atoi((e + "--1").c_str()) == 0); showLeaks();
	check(ft_atoi((e + "++1").c_str()) == 0); showLeaks();
	check(ft_atoi((e + "+1").c_str()) == 1); showLeaks();
	check(ft_atoi((e + "-1").c_str()) == -1); showLeaks();
	check(ft_atoi((e + "0").c_str()) == 0); showLeaks();
	check(ft_atoi((e + "+42lyon").c_str()) == 42); showLeaks();
	check(ft_atoi((e + "+101").c_str()) == 101); showLeaks();
	check(ft_atoi((e + to_string(INT_MAX)).c_str()) == INT_MAX); showLeaks();
	check(ft_atoi((e + to_string(INT_MIN)).c_str()) == INT_MIN); showLeaks();
	check(ft_atoi("-+42") == 0); showLeaks();
	check(ft_atoi("+-42") == 0); showLeaks();
	check(ft_atoi((string("+") + e + "42").c_str()) == 0); showLeaks();
	check(ft_atoi((string("-") + e + "42").c_str()) == 0); showLeaks();
	check(ft_atoi((string("1") + e + "42").c_str()) == 1); showLeaks();
	check(ft_atoi((string("-1") + e + "42").c_str()) == -1); showLeaks();
}*/
