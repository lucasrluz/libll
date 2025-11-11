#include "libll.h"

void ll_putstr(char *s) {
    write(1, s, ll_strlen(s));
}