/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:14:22 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/25 14:14:26 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp_l;
	int		count;

	count = 0;
	temp_l = lst;
	while (temp_l)
	{
		temp_l = temp_l->next;
		count++;
	}
	return (count);
}
