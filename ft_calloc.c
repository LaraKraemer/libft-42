/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                       	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:28:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 17:18:56 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp_ptr;
	
	// allocating count * size bytes in memory with malloc
	temp_ptr = malloc(count * size);
	// if no  memory was alloacted exit
	if (!temp_ptr)
		return (NULL);
	// set every allocated  byte to 0
	ft_memset(temp_ptr, 0, count * size);
	// return allocated memory
	return (temp_ptr);
}
