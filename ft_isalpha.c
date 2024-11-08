
int	ft_isalpha(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

#include <stdio.h> 

int main() 
{
    char testChar = 'a';
    
    if (ft_isalpha(testChar)) {
        printf("%c is an alphabetic character.\n", testChar);
    } else {
        printf("%c is not an alphabetic character.\n", testChar);
    }

    return 0;
}
