/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:01:24 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:01:26 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS		n: the integer to convert.
RETURN VALUE	The string representing the integer.
				NULL if the allocation fails.
EXTERNAL FUN.   malloc
DESCRIPTION		Allocates (with malloc(3)) and returns a string
				representing the integer received as an argument.
				Negative numbers must be handled.
*/
#include "libft.h"

int	cnt_len(int n)
{
	int	len_num;

	len_num = 0;
	if (n <= 0 && n != -2147483648)
	{
		len_num += 1;
		n = -n;
	}
	while (n != 0)
	{
		len_num++;
		n = n / 10;
	}
	return (len_num);
}

void	*fill_str(char *str, int len_num, int n)
{
	int	i;

	i = len_num - 1;
	while (n >= 10)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[i] = n % 10 + '0';
	str[len_num] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len_num;
	char	*str;

	if (n == -2147483648)
		len_num = 11;
	else
		len_num = cnt_len(n);
	str = (char *)malloc(sizeof(char) * len_num + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		fill_str(str, len_num, -(n + 1));
		str[0] = '-';
		str[len_num - 1] = '8';
	}
	else if (n < 0)
	{
		fill_str(str, len_num, -n);
		str[0] = '-';
	}
	else
		fill_str(str, len_num, n);
	return (str);
}
