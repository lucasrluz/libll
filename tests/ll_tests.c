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

    // ll_strncmp
    assert(ll_strncmp("", "", 0) == 0);
    assert(ll_strncmp("", "", 1) == 0);
    assert(ll_strncmp("foo", "foo", 2) == 0);
    assert(ll_strncmp("foo", "foo", 3) == 0);
    assert(ll_strncmp("boo", "foo", 1) == -4);
    assert(ll_strncmp("foo", "boo", 1) == 4);
    assert(ll_strncmp("boo", "foo", 3) == -4);
    assert(ll_strncmp("foo", "boo", 3) == 4);
    
}