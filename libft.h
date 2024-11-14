#ifndef LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h> 
# define LIBFT_H

/* String functions */
int	ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(char c);
int	ft_isalnum(int c);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *dest, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t numBytes);
void	*ft_memmove(void *dest, const void *src, size_t numBytes);
size_t	ft_strlcpy(char *dest, const char *src, size_t destSize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);



#endif
