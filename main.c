#include <unistd.h>
#include <stdlib.h>

// Strings Manipulation
size_t ll_strlen(char *c) {
    size_t i = 0;

    while (c[i]) {
        i++;
    }

    return i;
}

int ll_strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }

        i++;
    }

    return 0;
}

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

char *ll_strcpy(char *dest, char *src) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];

        i++;
    }

    dest[i] = '\0';

    return dest;
}

char *ll_strdup(char *src) {
    int i = 0;

    char *dest = malloc(ll_strlen(src));

    ll_strcpy(dest, src);

    return dest;
}

char *ll_strcat(char *dest, char *src) {
    int i = 0;

    size_t dest_size = ll_strlen(dest);

    while (src[i] != '\0') {
       dest[dest_size + i] = src[i];

       i++;
    }
    
    return dest;
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
    char *s1 = "Foo";
    
    char *ptr = *s1[1];

    return 0;
}
