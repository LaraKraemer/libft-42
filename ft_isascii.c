/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:18:05 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 11:18:13 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int main() {
    char character = 'A'; 
    int result = ft_isascii(character);
    printf("Result for 'A': %d\n", result);  

    int non_ascii = 200; 
    result = ft_isascii(non_ascii);
    printf("Result for 200: %d\n", result);

    return 0;
}
*/
