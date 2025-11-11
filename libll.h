#ifndef LIBLL_H
# define LIBLL_H

#include <unistd.h>
#include <stdlib.h>

void ll_putchar(char c);
void ll_putstr(char *s);
void ll_putendl(char *s);
void ll_putnbr(int n);
size_t ll_strlen(char *c);
int ll_strcmp(char *s1, char *s2);
int ll_strncmp(char *s1, char *s2, size_t n);
char *ll_strcpy(char *dest, char *src);
char *ll_strdup(char *src);
char *ll_strcat(char *dest, char *src)

#endif