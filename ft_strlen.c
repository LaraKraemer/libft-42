/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:22:43 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 12:32:15 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char word[20] = "Hello World!";
	printf("%d", ft_strlen(word));
	return 0;
}
*/
