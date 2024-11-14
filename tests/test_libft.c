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
#include <stddef.h>
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

void test_ft_memmove_all_cases(void) {
    // Test Case 1: Simple copy with non-overlapping regions
    char src1[] = "Hello, World!";
    char dest1[20] = {0};
    ft_memmove(dest1, src1, strlen(src1) + 1);  // Copy including null terminator
    TEST_ASSERT_EQUAL_STRING("Hello, World!", dest1);

    // Test Case 2: Same source and destination
    char src2[] = "Hello, World!";
    ft_memmove(src2, src2, strlen(src2) + 1);  // Should remain unchanged
    TEST_ASSERT_EQUAL_STRING("Hello, World!", src2);

    // Test Case 3: Overlapping regions (src < dest)
    char buffer3[] = "1234567890";
    ft_memmove(buffer3 + 2, buffer3, 5);  // Move "12345" to the start of "34567890"
    TEST_ASSERT_EQUAL_STRING("1212345890", buffer3);

    // Test Case 4: Overlapping regions (dest < src)
    char buffer4[] = "1234567890";
    ft_memmove(buffer4, buffer4 + 2, 5);  // Move "34567" to the start of "1234567890"
    TEST_ASSERT_EQUAL_STRING("3456767890", buffer4);

    // Test Case 5: Copying zero bytes
    char src5[] = "Hello, World!";
    char dest5[20] = "Test String";
    ft_memmove(dest5, src5, 0);  // No bytes should be copied
    TEST_ASSERT_EQUAL_STRING("Test String", dest5);

    // Test Case 6: NULL pointers
    char dest6[20] = "Existing Data";
    TEST_ASSERT_NULL(ft_memmove(NULL, dest6, 5));       // Source is NULL
    TEST_ASSERT_NULL(ft_memmove(dest6, NULL, 5));       // Destination is NULL
    TEST_ASSERT_NULL(ft_memmove(NULL, NULL, 5));        // Both are NULL

    // Test Case 7: Large data block
    char src7[1000];
    char dest7[1000];
    memset(src7, 'A', sizeof(src7));
    src7[999] = '\0';  // Null-terminate for string comparison
    ft_memmove(dest7, src7, sizeof(src7));
    TEST_ASSERT_EQUAL_MEMORY(src7, dest7, sizeof(src7));  // Compare entire memory block
}

void test_ft_strlcpy(void)
{
    // Test Case 1: Normal copy (src fits in dest)
    char dest1[20] = {0};   // Allocate space for the destination
    const char *src1 = "Hello";
    size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));  // Copy "Hello" into dest1
    TEST_ASSERT_EQUAL_STRING("Hello", dest1);  // Ensure the string is copied
    TEST_ASSERT_EQUAL(result1, 5);  // The length of the source string is 5

    // Test Case 2: Destination smaller than source (destination will be truncated)
    char dest2[5] = {0};    // Allocate space for the destination (smaller than src)
    const char *src2 = "Hello, World!";
    size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));  // Copy "Hello" into dest2 (it gets truncated)
    TEST_ASSERT_EQUAL_STRING("Hell", dest2);  // The destination will hold "Hell"
    TEST_ASSERT_EQUAL(result2, 13);  // The length of the source string is 13

    // Test Case 3: Destination is large enough to hold source + null terminator
    char dest3[20] = {0};    // Allocate space for the destination (enough for src and null terminator)
    const char *src3 = "World!";
    size_t result3 = ft_strlcpy(dest3, src3, sizeof(dest3));  // Copy "World!" into dest3
    TEST_ASSERT_EQUAL_STRING("World!", dest3);  // Ensure the entire string is copied
    TEST_ASSERT_EQUAL(result3, 6);  // The length of the source string is 6
}

void test_ft_toupper(void)
{
    // Test lowercase letters
    TEST_ASSERT_EQUAL_INT('A', ft_toupper('a'));
    TEST_ASSERT_EQUAL_INT('Z', ft_toupper('z'));
    TEST_ASSERT_EQUAL_INT('M', ft_toupper('m'));

    // Test uppercase letters (should remain unchanged)
    TEST_ASSERT_EQUAL_INT('A', ft_toupper('A'));
    TEST_ASSERT_EQUAL_INT('Z', ft_toupper('Z'));
    TEST_ASSERT_EQUAL_INT('M', ft_toupper('M'));

    // Test non-alphabet characters (should remain unchanged)
    TEST_ASSERT_EQUAL_INT('1', ft_toupper('1'));
    TEST_ASSERT_EQUAL_INT('!', ft_toupper('!'));
    TEST_ASSERT_EQUAL_INT(' ', ft_toupper(' '));
    TEST_ASSERT_EQUAL_INT('@', ft_toupper('@'));

    // Test boundary values around lowercase 'z' and uppercase 'A'
    TEST_ASSERT_EQUAL_INT('[', ft_toupper('[')); // ASCII character after 'Z'
    TEST_ASSERT_EQUAL_INT('`', ft_toupper('`')); // ASCII character before 'a'

    // Test with non-printable character (boundary case)
    TEST_ASSERT_EQUAL_INT('\n', ft_toupper('\n'));
}

void test_ft_tolower(void)
{
    // Test lowercase letters(should remain unchanged)
    TEST_ASSERT_EQUAL_INT('a', ft_tolower('a'));
    TEST_ASSERT_EQUAL_INT('z', ft_tolower('z'));
    TEST_ASSERT_EQUAL_INT('m', ft_tolower('m'));

    // Test uppercase letters 
    TEST_ASSERT_EQUAL_INT('a', ft_tolower('A'));
    TEST_ASSERT_EQUAL_INT('z', ft_tolower('Z'));
    TEST_ASSERT_EQUAL_INT('m', ft_tolower('M'));

    // Test non-alphabet characters (should remain unchanged)
    TEST_ASSERT_EQUAL_INT('1', ft_tolower('1'));
    TEST_ASSERT_EQUAL_INT('!', ft_tolower('!'));
    TEST_ASSERT_EQUAL_INT(' ', ft_tolower(' '));
    TEST_ASSERT_EQUAL_INT('@', ft_tolower('@'));

    // Test boundary values around lowercase 'z' and uppercase 'A'
    TEST_ASSERT_EQUAL_INT('[', ft_tolower('[')); // ASCII character after 'Z'
    TEST_ASSERT_EQUAL_INT('`', ft_tolower('`')); // ASCII character before 'a'

    // Test with non-printable character (boundary case)
    TEST_ASSERT_EQUAL_INT('\n', ft_tolower('\n'));
}

void test_ft_strchr(void) {
    // Test Case 1: Character is present in the middle of the string
    const char str1[] = "Hello, World!";
    char ch1 = 'W';
    char *result1 = ft_strchr(str1, ch1);
    TEST_ASSERT_NOT_NULL_MESSAGE(result1, "Character 'W' should be found in \"Hello, World!\"");
    TEST_ASSERT_EQUAL_PTR(&str1[7], result1);

    // Test Case 2: Character is not present in the string
    const char str2[] = "Hello, World!";
    char ch2 = 'x';
    char *result2 = ft_strchr(str2, ch2);
    TEST_ASSERT_NULL_MESSAGE(result2, "Character 'x' should not be found in \"Hello, World!\"");

    // Test Case 3: Search for the null terminator
    const char str3[] = "Hello, World!";
    char ch3 = '\0';
    char *result3 = ft_strchr(str3, ch3);
    TEST_ASSERT_NOT_NULL_MESSAGE(result3, "Null terminator should be found at the end of \"Hello, World!\"");
    TEST_ASSERT_EQUAL_PTR(&str3[13], result3);
}

void test_ft_strrchr(void)
{
    // Test case 1: Find last occurrence of 'o' in the string
    const char *str1 = "Hello, World!";
    char ch1 = 'o';
    char *result1 = ft_strrchr(str1, ch1);
    TEST_ASSERT_NOT_NULL(result1);  // Should find the last 'o' in "Hello, World!"
    TEST_ASSERT_EQUAL_PTR(&str1[8], result1);  // 'o' should be at index 7

    // Test case 2: Character not found in the string
    const char *str2 = "Hello, World!";
    char ch2 = 'z';
    char *result2 = ft_strrchr(str2, ch2);
    TEST_ASSERT_NULL(result2);  // 'z' is not in the string, so result should be NULL
    
    // Test case 3: Find the last occurrence of the null terminator
    const char *str3 = "Hello, World!";
    char ch3 = '\0';
    char *result3 = ft_strrchr(str3, ch3);
    TEST_ASSERT_NOT_NULL(result3);  // Should find the null terminator at the end of the string
    TEST_ASSERT_EQUAL_PTR(&str3[13], result3);  // Null terminator is at index 13
}

void test_ft_memchr(void) {
    // Test Case 1: Character is present in the middle of the string
    const char str1[] = "Hello, World!";
    char *result1 = ft_memchr(str1, 'W', 13);
    TEST_ASSERT_NOT_NULL_MESSAGE(result1, "Character 'W' should be found in \"Hello, World!\"");
    TEST_ASSERT_EQUAL_PTR(&str1[7], result1);

    // Test Case 2: Character is not present in the string
    const char str2[] = "Hello, World!";
    char *result2 = ft_memchr(str2, 'x', 13);
    TEST_ASSERT_NULL_MESSAGE(result2, "Character 'x' should not be found in \"Hello, World!\"");

    // Test Case 3: Search for the null terminator
    const char str3[] = "Hello, World!";
    char *result3 = ft_memchr(str3, '\0', 14);
    TEST_ASSERT_NOT_NULL_MESSAGE(result3, "Null terminator should be found at the end of \"Hello, World!\"");
    TEST_ASSERT_EQUAL_PTR(&str3[13], result3);
}

void test_ft_memcmp(void) {
    // Test Case 1: Character is present in the middle of the string
    const char s1[] = "Hello, World!";
    const char s2[] = "Hello, World!";
    size_t n1 = sizeof(s1);  // Compare full length of strings
    int result = ft_memcmp(s1, s2, n1);
    TEST_ASSERT_EQUAL_INT(0, result);

    // Test case: Memory blocks differ at the end
    const char s3[] = "Hello, World!";
    const char s4[] = "Hello, World?";
    size_t n2 = sizeof(s3);  // Compare full length of strings
    int result2 = ft_memcmp(s3, s4, n2);
    TEST_ASSERT_NOT_EQUAL(0, result2);

    // Test case: Comparing part of the memory block
    const char s5[] = "Hello, World!";
    const char s6[] = "Hello, Everyone!";
    size_t n3 = 5;  // Only compare the first 5 bytes
    int result3 = ft_memcmp(s5, s6, n3);
    TEST_ASSERT_EQUAL_INT(0, result3);
}

// Main test runner
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_isalpha);
    RUN_TEST(test_ft_memset);
    RUN_TEST(test_ft_bzero);
    RUN_TEST(test_ft_memmove_all_cases);
    RUN_TEST(test_ft_strlcpy);
    RUN_TEST(test_ft_toupper);
    RUN_TEST(test_ft_tolower);
    RUN_TEST(test_ft_strchr);
    RUN_TEST(test_ft_strrchr);
    RUN_TEST(test_ft_memchr);
    RUN_TEST(test_ft_memcmp);
    return UNITY_END();
}

