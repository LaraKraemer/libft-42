/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                       	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:28:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/19 14:48:56 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(int n);

char	*ft_itoa(int n)
{
	long	i;
	int		len;
	char	*s;

	i = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_n(n);
	if (n < 0)
		n = n * (-1);
	s = (char *)malloc((len + 1) * sizeof (char));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while ((--len) >= 0)
	{
		s[len] = ((n % 10) + 48);
		n = n / 10;
	}
	if (i < 0)
		s[0] = '-';
	return (s);
}

static int	count_n(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
