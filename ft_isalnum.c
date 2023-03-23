/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:49:34 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/09 15:49:47 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       Checks for an alphanumeric character; it is equivalent to 
       (isalpha(c) || isdigit(c)).

RETURN VALUE
	   1 if it is True or 0 if it is False.
*/
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) \
				|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
