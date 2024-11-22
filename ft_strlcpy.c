/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/12 13:31:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destSize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destSize == 0)
		return (src_len);
	if (src_len + 1 < destSize)
		ft_memcpy(dest, src, src_len + 1);
	else if (destSize != 0)
	{
		ft_memcpy(dest, src, destSize - 1);
		dest[destSize - 1] = 0;
	}
	return (src_len);
}
