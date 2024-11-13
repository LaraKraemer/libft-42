/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:24:58 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/12 15:11:08 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

// copy a block of memory from a location to another.
void	*ft_memmove(void *dest, const void *src, size_t numBytes)
{
	// declare counter 
	// declare two temp pointer   
	size_t		i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	//  check if both src and dst are NULL 
	if (dest == NULL || src == NULL)
		return (NULL);

	// make temp pointers equal to dst/src converted to char pointer
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;

	if (temp_dest > temp_src) 
	{
		// backward copy to handle overlapping or src < dest
		i = numBytes;
		while (i > 0)
		{
			i--;
			temp_dest[i] = temp_src[i];
		}
	}
	else {
		// forward copy if no overlap or dest < src
		i = 0;
		while (i < numBytes)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
