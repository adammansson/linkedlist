//
// Created by adam on 11/4/22.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stddef.h>

typedef struct {
  size_t length;

  struct node *first;
  struct node *last;
} linkedlist_t;

linkedlist_t *LL_new();

void LL_foreach(linkedlist_t *ll, void (*fun_ptr)(void *));

void LL_free(linkedlist_t *ll);

void LL_append(linkedlist_t *ll, void *element, size_t size);

void LL_prepend(linkedlist_t *ll, void *element, size_t size);

void LL_insert(linkedlist_t *ll, void *element, size_t size,
               unsigned int index);

void *LL_get(linkedlist_t *ll, unsigned int index);

#endif // LINKEDLIST_LINKEDLIST_H
