#include "libll.h"

char *ll_strcat(char *dest, char *src) {
    int i = 0;

    size_t dest_size = ll_strlen(dest);

    while (src[i] != '\0') {
       dest[dest_size + i] = src[i];

       i++;
    }
    
    return dest;
}