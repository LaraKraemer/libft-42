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
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t numBytes)
{
	size_t		i;
	char		*temp_dest;
	char		*temp_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	i = 0;
	if (temp_dest > temp_src)
		while (numBytes-- > 0)
			temp_dest[numBytes] = temp_src[numBytes];
	else
	{
		while (i < numBytes)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
