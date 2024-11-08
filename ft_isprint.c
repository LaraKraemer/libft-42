
int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

#include <stdio.h>

int main()
{
	int ascii_print = ft_isprint(63);
	int ascii_noprint =ft_isprint(21);
	printf("%d\n", ascii_print);
	printf("%d\n", ascii_noprint);
	return 0;
}
