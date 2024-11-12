/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:17:43 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 12:32:53 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h> 

int main() 
{
    char testChar = 'a';
    
    if (ft_isalpha(testChar)) {
        printf("%c is an alphabetic character.\n", testChar);
    } else {
        printf("%c is not an alphabetic character.\n", testChar);
    }

    return 0;
}
*/
