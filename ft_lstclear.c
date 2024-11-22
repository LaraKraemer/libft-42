/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:00:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/20 13:30:56 by lkramer          ###   ########.fr       */
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
