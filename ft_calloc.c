/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:28:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/25 13:29:22 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp_ptr;
	size_t			total_size;

	total_size = count * size;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	temp_ptr = malloc(total_size);
	if (!temp_ptr)
		return (NULL);
	ft_memset(temp_ptr, 0, count * size);
	return (temp_ptr);
}
