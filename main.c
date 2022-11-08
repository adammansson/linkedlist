#include <stdlib.h>
#include <stdio.h>
#include "src/linkedlist.h"
#include "src/intlist.h"

int main()
{
    linkedlist_t *ll;

    ll = LL_new();

    int a = 0, b = 2, c = 5, d = 89;

    IL_append(ll, &a);
    IL_append(ll, &b);
    IL_append(ll, &c);
    IL_append(ll, &d);
    IL_append(ll, &a);

    IL_print(ll);

    LL_free(ll);
    return 0;
}
