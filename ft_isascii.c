
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>

int main() {
    char character = 'A'; 
    int result = ft_isascii(character);
    printf("Result for 'A': %d\n", result);  

    int non_ascii = 200; 
    result = ft_isascii(non_ascii);
    printf("Result for 200: %d\n", result);

    return 0;
}
