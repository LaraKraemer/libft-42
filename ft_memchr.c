/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/14 10:21:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;	
	unsigned char	temp_c;
	unsigned char	*temp_s;

	temp_c = (unsigned char )c;
	temp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return ((void *)temp_s + i);
		i++;
	}
	return (NULL);
}
