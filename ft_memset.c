/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:23:54 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/12 13:31:12 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <stddef.h> 

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)dest;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer1[10] = "abcdefghi"; // Example buffer with initial data
	char buffer2[10] = "abcdefghi"; // A copy of buffer1 for comparison
	char buffer3[10] = "";          // Empty buffer to test filling
	int  i;

	// Test 1: Basic usage, fill with 'X' for all bytes
	ft_memset(buffer1, 'X', 10);
	printf("Test 1 - Fill with 'X': %s\n", buffer1); // Expected: XXXXXXXXXX

	// Test 2: Partial fill (filling 5 bytes with 'Y')	ft_memset(buffer2, 'Y', 5);
	printf("Test 2 Fill 5 bytes with 'Y': %s\n", buffer2); // Expected: YYYYYfghi
	// Test 3: Edge case - fill with 0 bytes (buffer should remain unchanged)
	ft_memset(buffer3, 'Z', 0);
	printf("Test 3 - Fill with 0 bytes (unchanged): %s\n", buffer3); // Expected: ""

	// Test 4: Large buffer test
	char large_buffer[100] = {0}; // A large buffer initialized to 0
	ft_memset(large_buffer, 'A', 100);
	printf("Test 4 - Large buffer filled with 'A':\n");
	for (i = 0; i < 100; i++)
		printf("%c", large_buffer[i]); // Expected: 100 'A' characters
	printf("\n");

	// Test 5: Boundary case - NULL pointer (undefined but common test case)
	// This may crash or produce a warning since memset with NULL isn't defined 
	behavior
	ft_memset(NULL, 'B', 5); // Expect this to do nothing or potentially crash

	return (0);
}
*/
