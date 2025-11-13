#include <stdlib.h>
#include "libll.h"

char *ll_strdup(char *src) {
    int i = 0;

    char *dest = malloc(ll_strlen(src));

    ll_strcpy(dest, src);

    return dest;
}