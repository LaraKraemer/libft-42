/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkramer <lkramer@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:39:12 by lkramer           #+#    #+#             */
/*   Updated: 2024/11/11 13:40:02 by lkramer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unity.h>   
#include "../libft.h"  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the setUp function for test initialization
void setUp(void) {
    // Initialize anything needed before each test (optional)
}

// Define the tearDown function for test cleanup
void tearDown(void) {
    // Clean up anything after each test (optional)
}


// Test for ft_strlen
void test_ft_strlen(void)
{
    TEST_ASSERT_EQUAL_INT(0, ft_strlen(""));
    TEST_ASSERT_EQUAL_INT(4, ft_strlen("test"));
    TEST_ASSERT_EQUAL_INT(11, ft_strlen("hello world"));
}

// Test for ft_isalpha
void test_ft_isalpha(void)
{
    TEST_ASSERT_TRUE(ft_isalpha('A'));
    TEST_ASSERT_TRUE(ft_isalpha('z'));
    TEST_ASSERT_FALSE(ft_isalpha('1'));
    TEST_ASSERT_FALSE(ft_isalpha('@'));
}

// Test for ft_memset
void test_ft_memset(void)
{
    char buffer[10] = {0};

    ft_memset(buffer, 'A', 5);
    TEST_ASSERT_EQUAL_MEMORY("AAAAA\0\0\0\0\0", buffer, 10);

    ft_memset(buffer, 'B', 0);
    TEST_ASSERT_EQUAL_MEMORY("AAAAA\0\0\0\0\0", buffer, 10);
}

// Test for ft_bzero
void test_ft_bzero(void) {
    char buffer[10];
    char zero_buffer[10] = {0};  // Buffer with all zeros for comparison

    // 1. Basic functionality: Zero out the entire buffer
    memset(buffer, 'A', sizeof(buffer));  // Fill buffer with non-zero values
    ft_bzero(buffer, 10);  // Zero out the entire buffer
    TEST_ASSERT_EQUAL_MEMORY(zero_buffer, buffer, 10);  // Compare to zero-filled buffer

    // 2. Edge Case: Zero-length input (should do nothing)
    memset(buffer, 'A', sizeof(buffer));  // Reset buffer to non-zero values
    ft_bzero(buffer, 0);  // Call with zero length
    char expected_buffer[10] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'};
    TEST_ASSERT_EQUAL_MEMORY(expected_buffer, buffer, 10);  // Ensure no change

    // 3. Edge Case: Partial zeroing
    memset(buffer, 'A', sizeof(buffer));  // Reset buffer to non-zero values
    ft_bzero(buffer, 5);  // Zero out only the first 5 bytes
    char partial_zero_buffer[10] = {0, 0, 0, 0, 0, 'A', 'A', 'A', 'A', 'A'};
    TEST_ASSERT_EQUAL_MEMORY(partial_zero_buffer, buffer, 10);  // Verify partial zeroing

    // 4. Edge Case: Single-byte zeroing
    char single_byte_buffer[1] = {'A'};
    ft_bzero(single_byte_buffer, 1);  // Zero out 1-byte buffer
    TEST_ASSERT_EQUAL_MEMORY("\0", single_byte_buffer, 1);  // Verify single byte is zero

    // 5. Large buffer test: Zero out a large memory block
    size_t large_size = 10000;
    char *large_buffer = malloc(large_size);
    memset(large_buffer, 'A', large_size);  // Fill buffer with non-zero values
    ft_bzero(large_buffer, large_size);  // Zero out the entire large buffer
    char *large_zero_buffer = calloc(large_size, 1);  // Allocate a large zero-filled buffer for comparison
    TEST_ASSERT_EQUAL_MEMORY(large_zero_buffer, large_buffer, large_size);  // Compare to zero-filled buffer

    // Free dynamically allocated memory
    free(large_buffer);
    free(large_zero_buffer);
}

// Main test runner
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_isalpha);
    RUN_TEST(test_ft_memset);
    RUN_TEST(test_ft_bzero);
    return UNITY_END();
}

