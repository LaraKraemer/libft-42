/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:28:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/26 16:28:26 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp_dest;
	size_t	i;

	i = 0;
	temp_dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!temp_dest)
		return (NULL);
	while (s1[i])
	{
		temp_dest[i] = s1[i];
		i++;
	}
	temp_dest[i] = 0;
	return (temp_dest);
}
