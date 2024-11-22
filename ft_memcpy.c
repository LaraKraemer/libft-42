/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:10:35 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/22 18:58:25 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numBytes)
{
	size_t			i;
	unsigned char	*s_dest;
	unsigned char	*s_src;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	while (i < numBytes)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	return (s_dest);
}
