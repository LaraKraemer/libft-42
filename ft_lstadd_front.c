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
#include <libft.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
