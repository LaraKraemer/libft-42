/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:19:29 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 12:33:51 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>

int main()
{
	int ascii_print = ft_isprint(63);
	int ascii_noprint =ft_isprint(21);
	printf("%d\n", ascii_print);
	printf("%d\n", ascii_noprint);
	return 0;
}
*/
