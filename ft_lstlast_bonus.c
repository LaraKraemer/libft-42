/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:14:53 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/25 14:14:55 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_l;

	if (!lst)
		return (NULL);
	temp_l = lst;
	while (temp_l->next)
	{
		temp_l = temp_l->next;
	}
	return (temp_l);
}
