
int	ft_isalnum(int c)
{
	return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||(c >= 'a' && c <= 'z');
}

#include <stdio.h>

int main()
{
	int result1 = ft_isalnum('3');
	int result2 = ft_isalnum('A');
	int result3 = ft_isalnum('&');
	printf("Result: %d\n", result1);
	printf("Result: %d\n", result2);
	printf("Result: %d\n", result3);
	return 0;
}
