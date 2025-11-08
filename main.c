#include <unistd.h>

// Strings Manipulation
size_t ll_strlen(char *c) {
    size_t i = 0;

    while (c[i]) {
        i++;
    }

    return i;
}

// I/O
void ll_putchar(char c) {
    write(1, &c, 1);
}

void ll_putstr(char *s) {
    write(1, s, ll_strlen(s));
}

void ll_putendl(char *s) {
    ll_putstr(s);
    ll_putchar('\n');
}

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

// main function

int main() {
    ll_putendl("lucas");
    ll_putnbr(-1234);

    return 0;
}
