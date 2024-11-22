/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/13 18:41:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;
	char		cc;

	last_occurrence = NULL;
	cc = (char) c;
	while (*s)
	{
		if (*s == cc)
			last_occurrence = s;
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
