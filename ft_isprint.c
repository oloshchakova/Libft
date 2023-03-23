/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:49:18 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 18:49:22 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       Checks for any printable character including space.
       
RETURN VALUE
	   1 if it is True or 0 if it is False.
*/
int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
