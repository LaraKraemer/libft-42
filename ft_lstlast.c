/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                   	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:00:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/21 12:30:56 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_l;

	temp_l = lst;
	if (!lst)
		return (NULL);
	while(temp_l->next)
	{
		temp_l = temp_l->next;
		temp_l++;
	}
	return (temp_l);
}