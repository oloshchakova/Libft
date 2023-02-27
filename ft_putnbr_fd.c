/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:04:29 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/20 12:04:31 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS 		n: The integer to output.
				fd: The file descriptor on which to write.
RETURN VALUE	None
EXTERNAL FUN.	write
DESCRIPTION		Outputs the integer ’n’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (unsigned int)(n * (-1));
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		nb %= 10;
	}
	ft_putchar_fd((nb + '0'), fd);
}
