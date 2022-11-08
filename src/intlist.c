//
// Created by adam on 11/6/22.
//

#include "intlist.h"
#include <stdio.h>

void IL_append(linkedlist_t *ll, int *element) {
  LL_append(ll, element, sizeof(int));
}

void IL_prepend(linkedlist_t *ll, int *element) {
  LL_prepend(ll, element, sizeof(int));
}

int IL_get(linkedlist_t *ll, unsigned int index) {
  return *((int *)LL_get(ll, index));
}

static inline void print_int_node(void *element) {
  printf("%i\n", *((int *)element));
}

void IL_print(linkedlist_t *ll) { LL_foreach(ll, &print_int_node); }
