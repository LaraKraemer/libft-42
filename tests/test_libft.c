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

#include <unity.h>   // Unity's header file
#include "../libft.h"  // Your library's header

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

// Main test runner
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_isalpha);
    RUN_TEST(test_ft_memset);
    return UNITY_END();
}

