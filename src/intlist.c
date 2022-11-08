//
// Created by adam on 11/6/22.
//

#include "intlist.h"
#include "linkedlist.h"
#include <stdio.h>

#define TO_INT(voidptr) (*((int *)voidptr))

void IL_append(linkedlist_t *ll, int *element) {
  LL_append(ll, element, sizeof(int));
}

void IL_prepend(linkedlist_t *ll, int *element) {
  LL_prepend(ll, element, sizeof(int));
}

void IL_insert(linkedlist_t *ll, int *element, unsigned int index) {
  LL_insert(ll, element, sizeof(int), index);
}

int IL_get(linkedlist_t *ll, unsigned int index) {
  return TO_INT(LL_get(ll, index));
}

static inline void print_int_node(void *element) {
  printf("%i\n", TO_INT(element));
}

void IL_print(linkedlist_t *ll) { LL_foreach(ll, &print_int_node); }
