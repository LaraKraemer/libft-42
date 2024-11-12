/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:10:35 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/12 14:31:59 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	*memcpy(void *to, const void *from, size_t numBytes)
{
	size_t			i;
	unsigned char	*s_to;
	unsigned char	*s_from;

	i = 0;
	s_to = (unsigned char *)to;
	s_from = (unsigned char *)from; 
	while (i < numBytes)
	{
		s_to[i] = s_from[i]; 
		i++;
	}
	return (s_to); 
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "Hello, world!";
    char dest[50];

    memcpy(dest, src, strlen(src) + 1);  // Include the null terminator

    printf("Destination after memcpy: %s\n", dest);"
    return 0;
}
*/
