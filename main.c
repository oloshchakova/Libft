/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:11:17 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 15:11:20 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)

{
	int	n;
	int	c;

	n = 49;
	c = 80;
	printf("isalpha %d \n", isalpha(n));
	printf("isalpha %d \n", isalpha(c));
	printf("ft_isalpha %d \n", ft_isalpha(n));
	printf("ft_isalpha %d", ft_isalpha(c));
	return (0);
}
