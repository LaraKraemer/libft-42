/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:18:27 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 11:18:35 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
