#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlen(char *str);
char *ft_strdup(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_bzero(void *s, size_t length);

#endif