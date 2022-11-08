#include "src/intlist.h"
#include "src/linkedlist.h"
#include "src/strlist.h"
#include <stdio.h>
#include <stdlib.h>

void IL_test(linkedlist_t *ll) {
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
  printf("%i\n", *IL_get(ll, 4));
}

void SL_test(linkedlist_t *ll) {
  char *a = "a";
  char *b = "b";
  char *c = "c";
  char *d = "d";
  char *e = "e";
  char *f = "f";
  char *g = "mmmmmmm";

  SL_append(ll, a);
  SL_append(ll, b);
  SL_append(ll, c);
  SL_prepend(ll, d);
  SL_prepend(ll, e);
  SL_prepend(ll, f);

  SL_insert(ll, g, 0);
  SL_insert(ll, g, 6);

  SL_print(ll);
  printf("%s\n", SL_get(ll, 4));
}

int main() {
  linkedlist_t *ll;

  ll = LL_new();

  // IL_test(ll);
  SL_test(ll);

  LL_free(ll);
  printf("Memory freed succesfully, exiting program");
  return 0;
}
