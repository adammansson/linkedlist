//
// Created by adam on 11/8/22.
//

#include "strlist.h"
#include "linkedlist.h"
#include <stdio.h>
#include <string.h>

#define SIZE_IN_BYTES(charptr) (strlen(charptr) + 1)

void SL_append(linkedlist_t *ll, char *element) {
  LL_append(ll, element, SIZE_IN_BYTES(element));
}

void SL_prepend(linkedlist_t *ll, char *element) {
  LL_prepend(ll, element, SIZE_IN_BYTES(element));
}

void SL_insert(linkedlist_t *ll, char *element, unsigned int index) {
  LL_insert(ll, element, SIZE_IN_BYTES(element), index);
}

char *SL_get(linkedlist_t *ll, unsigned int index) {
  return (char *)(LL_get(ll, index));
}

static inline void print_str_node(void *element) {
  printf("%s\n", (char *)(element));
}

void SL_print(linkedlist_t *ll) { LL_foreach(ll, &print_str_node); }
