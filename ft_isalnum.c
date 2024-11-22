/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:16:59 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 12:27:30 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	int	digit;
	int	upper;
	int	lower;

	digit = (c >= '0' && c <= '9');
	upper = (c >= 'A' && c <= 'Z');
	lower = (c >= 'a' && c <= 'z');
	return (digit || upper || lower);
}
