#include <stddef.h>

size_t ll_strlen(char *str) {
    size_t size = 0;

    while (str[size] != '\0') {
        size++;
    }

    return size;
}