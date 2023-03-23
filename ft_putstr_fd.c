/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:03:44 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:03:46 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS 		s: The string to output.
				fd: The file descriptor on which to write.
RETURN VALUE	None
EXTERNAL FUN.	write
DESCRIPTION		Outputs the string ’s’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
