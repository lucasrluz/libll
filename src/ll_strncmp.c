#include <stddef.h>

int ll_strncmp(char *str1, char *str2, size_t n) {
    int i = 0;

    while (i < n) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }

        i++;
    }

    return 0;
}