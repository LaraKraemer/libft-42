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
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp_ptr;
	size_t			total_size;

	size_t total_size = count * size;
    if (total_size == 0 || total_size / size != count) 
        return NULL;
	temp_ptr = malloc(count * size);
	if (!temp_ptr)
		return (NULL);
	ft_memset(temp_ptr, 0, count * size);
	return (temp_ptr);
}
