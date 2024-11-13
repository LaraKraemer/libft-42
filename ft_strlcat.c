/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:30:09 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 13:31:44 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	dest_len;
	size_t	src_len;

	// get the lengths of the source and destination strings
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	// if there's no space left, just return the total length of src + dst
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	a = 0;
	// while  size is large enough to accommodate both strings
	while (a < size - dest_len - 1 && src[a] != '\0')
	{
		// copy the entire src into dst
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	// return the total length of the string that would have been created
	return (dest_len + src_len);
}

/*
#include <stdio.h> 

int main(void)
{
	unsigned int size = 2; // max bytes of new dest string
	char dest[30] = "Hello";
	char src[] = "gu";
	int result = 0; // length of actual dest string after concentation
	result = ft_strlcat(dest, src, size);
	printf("%d\n", result);
	printf("%s", dest);
	return 0; 
}
*/
