/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:03:24 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:03:25 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS		c: The character to output.
				fd: The file descriptor on which to write.
RETURN VALUE	None
EXTERNAL FUN.	write
DESCRIPTION		Outputs the character ’c’ to the given file descriptor
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
