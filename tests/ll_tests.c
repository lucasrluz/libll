#include <assert.h>
#include "libll.h"

int main(void) {
    // ll_strlen
    assert(ll_strlen("") == 0);
    assert(ll_strlen("f") == 1);
    assert(ll_strlen("foo") == 3);

    // ll_strcmp
    assert(ll_strcmp("", "") == 0);
    assert(ll_strcmp("foo", "foo") == 0);
    assert(ll_strcmp("boo", "foo") == -4);
    assert(ll_strcmp("foo", "boo") == 4);
}