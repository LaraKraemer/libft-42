#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>

/* String functions */
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void	*ft_memset(void *dest, int c, size_t n);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(char c);
int	ft_isalnum(int c);



#endif
