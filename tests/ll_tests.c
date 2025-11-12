#include <assert.h>
#include "libll.h"

int main(void) {
    // ll_strlen
    assert(ll_strlen("") == 0);
    assert(ll_strlen("f") == 1);
    assert(ll_strlen("foo") == 3);
}