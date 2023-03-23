/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:38:10 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 13:38:12 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       Checks  for an alphabetic character; in the standard "C" locale,
       it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
       cales, there may be additional characters for which isalpha() is
       true—letters which are neither uppercase nor lowercase.

RETURN VALUE
	   1 if it is True or 0 if it is False.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
