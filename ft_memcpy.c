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
#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t numBytes)
{
	// declaration of two temp pointers 
	// declaration of counter variable 
	size_t			i;
	unsigned char	*s_dest;
	unsigned char	*s_src;

	//  check if both src and dst are NULL 
	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	// assigning temp pointers to actual pointers
	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src; 
	// looping until numBytes of src is copied in dest
	while (i < numBytes)
	{
		s_dest[i] = s_src[i]; 
		i++;
	}
	// returning modified dest
	return (s_dest); 
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
