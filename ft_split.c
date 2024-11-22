/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:28:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/19 12:48:56 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_s(char const *s, char c);
static void		*ft_free_s(char **s, int count);

char	**ft_split(const char *s, char c)
{
	char	**new_string;
	size_t	len_string;
	int		i;

	new_string = (char **)malloc((ft_count_s(s, c) + 1) * sizeof (char *));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len_string = 0;
			while (s[len_string] && s[len_string] != c)
				len_string++;
			new_string[i] = ft_substr(s, 0, len_string);
			if (!new_string[i++])
				return (ft_free_s(new_string, i - 1));
			s += len_string;
		}
	}
	new_string[i] = NULL;
	return (new_string);
}

static size_t	ft_count_s(const char *s, char c)
{
	size_t	count;
	size_t	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

static void	*ft_free_s(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}
