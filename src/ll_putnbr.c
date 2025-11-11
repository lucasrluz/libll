#include "libll.h"

void ll_putnbr(int n) {
    if (n < 0) {
        ll_putchar('-');

        n = n * -1;
    }

    if (n >= 10) {
        ll_putnbr(n / 10);
    }

    ll_putchar(n % 10 + '0');
}