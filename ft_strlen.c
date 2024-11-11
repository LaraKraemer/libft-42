
int	ft_strlen(char *str)
{
	int	length;
	length = 0;

	while (*str)
	{
		length++;
		str++;

	}
	return (length);
}

#include <stdio.h>

int main(void)
{
	char word[20] = "Hello World!";
	printf("%d", ft_strlen(word));
	return 0;
}

