/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:29:33 by oloshcha          #+#    #+#             */
/*   Updated: 2023/01/11 19:29:34 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
       The calloc() function allocates memory for an array of nmemb elements
       of size bytes each and returns a pointer to the allocated memory.
       The memory is set to zero.  If nmemb or size is  0,  then  calloc()
       returns  either NULL,  or  a  unique  pointer value that can later be
       successfully passed to free().  If the multiplication of nmemb and size
       would result in integer overflow, then calloc() returns an  error.   
       By  contrast,  an  integer overflow  would  not  be detected in the
       following call to malloc(), with the result that an incorrectly sized
       block of memory would be allocated:   malloc(nmemb * size);

RETURN VALUE
       The malloc() and calloc() functions return a pointer to the allocated
       memory, which is  suitably  aligned  for any  built-in type.  On error,
       these functions return NULL.  NULL may also be returned by a successful
       call to malloc() with a size of zero, or by a successful call to 
       calloc() with nmemb or size equal to zero.

*/
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	long long	tot_size;
	void		*p;

	tot_size = size * nmemb;
	if (tot_size / size != nmemb)
		return (NULL);
	p = (void *)malloc(tot_size);
	if (p != NULL)
	{
		ft_memset(p, 0, tot_size);
	}
	return (p);
}
