/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:54:04 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/09 15:54:11 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       Checks whether c is a 7-bit unsigned char value that  fits  into
       the ASCII character set.
       
RETURN VALUE
	   1 if it is True or 0 if it is False.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
