/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:15:18 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/25 14:15:20 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_l;

	while (*lst)
	{
		temp_l = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_l;
	}
	free(*lst);
	*lst = NULL;
}
