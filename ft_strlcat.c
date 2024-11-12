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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	a = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	a = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (a < size - dest_len - 1 && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
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
