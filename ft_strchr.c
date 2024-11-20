/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/13 17:51:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*str;
	char		cc;

	str = s;
	cc = (char) c;
	while (*str)
	{
		if (*str == cc)
			return ((char *)str);
		str++;
	}
	if (cc == '\0')
		return ((char *)str);
	return (0);
}
