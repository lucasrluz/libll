#include "libll.h"

void ll_putchar(char c) {
    write(1, &c, 1);
}