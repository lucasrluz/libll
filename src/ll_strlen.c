#include "libll.h"

size_t ll_strlen(char *c) {
    size_t i = 0;

    while (c[i]) {
        i++;
    }

    return i;
}