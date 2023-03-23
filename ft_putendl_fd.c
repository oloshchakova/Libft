/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:04:14 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:04:16 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS 		s: The string to output.
				fd: The file descriptor on which to write.
RETURN VALUE	None
EXTERNAL FUN.	write
DESCRIPTION		Outputs the string ’s’ to the given file descriptor
				followed by a newline.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
