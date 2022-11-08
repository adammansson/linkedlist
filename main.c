#include "src/intlist.h"
#include "src/linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  linkedlist_t *ll;

  ll = LL_new();

  int a = 1;
  int b = 2;
  int c = 3;
  int d = 99;
  int e = 98;
  int f = 97;
  int g = 10101010;

  IL_append(ll, &a);
  IL_append(ll, &b);
  IL_append(ll, &c);
  IL_prepend(ll, &d);
  IL_prepend(ll, &e);
  IL_prepend(ll, &f);

  IL_insert(ll, &g, 0);
  IL_insert(ll, &g, 6);

  IL_print(ll);

  LL_free(ll);
  printf("Memory freed succesfully, exiting program");
  return 0;
}
