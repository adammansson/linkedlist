//
// Created by adam on 11/4/22.
//

#include "linkedlist.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

linkedlist_t *LL_new() {
  linkedlist_t *res;

  res = malloc(sizeof(linkedlist_t));
  res->length = 0;
  res->first = NULL;
  res->last = NULL;
  return res;
}

void LL_foreach(linkedlist_t *ll, void (*function_ptr)(void *)) {
  struct node *current;

  current = ll->first;
  while (current) {
    (*function_ptr)(current->element);
    current = current->next;
  }
}

void LL_free(linkedlist_t *ll) {
  LL_foreach(ll, &free);
  free(ll);
}

void LL_append(linkedlist_t *ll, void *element, size_t size) {
  struct node *to_be_added;

  to_be_added = new_node(element, size, NULL);

  if (ll->first == NULL) {
    ll->first = to_be_added;
    ll->last = to_be_added;
  } else {
    ll->last->next = to_be_added;
    ll->last = to_be_added;
  }
}

void LL_prepend(linkedlist_t *ll, void *element, size_t size) {
  struct node *to_be_added;

  to_be_added = new_node(element, size, ll->first);

  if (ll->first == NULL) {
    ll->first = to_be_added;
    ll->last = to_be_added;
  } else {
    ll->first = to_be_added;
  }
}

void *LL_get(linkedlist_t *ll, unsigned int index) {
  struct node *current;

  current = ll->first;
  for (unsigned int i = 0; i < index; i++) {
    current = current->next;
  }
  return current->element;
}
