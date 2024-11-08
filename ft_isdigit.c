
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>

int main()
{
	int result = ft_isdigit('3');
	printf("Result: %d\n", result);
	return 0;
}
