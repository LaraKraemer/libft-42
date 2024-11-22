/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                    	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:00:20 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/20 13:30:56 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_l;

	temp_l = lst;
	while (temp_l)
	{
		f(temp_l->content);
		temp_l = temp_l->next;
	}
}
