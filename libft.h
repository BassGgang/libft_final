#ifndef LIBFT_H
# define LIBFT_H

#include<stdlib.h>

void ft_bzero(void *s, size_t n);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int d);
int ft_isprint(int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t len);
int ft_strlen(char *c);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t ft_strlcat(char *dst, char *src, size_t size);

#endif