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

    // ll_strcpy
    char *ll_strcpy_src = "foo";
    char ll_strcpy_dest[ll_strlen(ll_strcpy_src)];

    assert(ll_strcpy(ll_strcpy_dest, ll_strcpy_src) == ll_strcpy_dest);
    assert(ll_strcmp(ll_strcpy_src, ll_strcpy_dest) == 0);

    // ll_strdup
    char *ll_strdup_src = "foo";
    char *ll_strdup_dest = ll_strdup(ll_strdup_src);

    assert(ll_strcmp(ll_strdup_src, ll_strdup_dest) == 0);

    // ll_strcat
    char *ll_strcat_src = " bar";
    char ll_strcat_dest[7] = "foo";

    ll_strcat(ll_strcat_dest, ll_strcat_src);

    assert(ll_strncmp(ll_strcat_dest, "foo bar", ll_strlen(ll_strcat_dest)) == 0);
}