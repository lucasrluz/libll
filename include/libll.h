#include <stddef.h>

#ifndef LIBLL_H
#define LIBLL_H

size_t ll_strlen(char *str);
int ll_strcmp(char *str1, char *str2);
int ll_strncmp(char *str1, char *str2, size_t n);
char *ll_strcpy(char *dest, char *src);
char *ll_strdup(char *src);
char *ll_strcat(char *dest, char *src);

#endif