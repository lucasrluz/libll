#include "libll.h"

int ll_strncmp(char *s1, char *s2, size_t n) {
    int i = 0;

    while (i < n) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }

        i++;
    }

    return 0;
}