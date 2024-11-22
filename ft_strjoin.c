/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/15 16:51:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	combined_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	combined_len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(combined_len + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, combined_len + 1);
	ft_strlcpy(dest + ft_strlen(s1), s2, combined_len + 1 - ft_strlen(s1));
	return (dest);
}
