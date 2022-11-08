//
// Created by adam on 11/4/22.
//

#include "linkedlist.h"
#include "node.h"
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

linkedlist_t *LL_new() {
  linkedlist_t *res;

  res = malloc(sizeof(linkedlist_t));
  if (res == NULL) {
    return NULL;
  }

  res->length = 0;
  res->first = NULL;
  res->last = NULL;
  return res;
}

void LL_foreach(linkedlist_t *ll, void (*fun_ptr)(void *)) {
  struct node *current;

  current = ll->first;
  while (current != NULL) {
    (*fun_ptr)(current->element);
    current = current->next;
  }
}

void LL_free(linkedlist_t *ll) {
  struct node *current, *temp;

  current = ll->first;
  while (current != NULL) {
    temp = current->next;
    free(current);
    current = temp;
  }
  free(ll);
}

void LL_append(linkedlist_t *ll, void *element, size_t size) {
  struct node *to_be_added;

  to_be_added = NODE_new(element, size, ll->last, NULL);
  assert(to_be_added != NULL);

  if (ll->first == NULL) {
    ll->first = to_be_added;
    ll->last = to_be_added;
  } else {
    ll->last->next = to_be_added;
    ll->last = to_be_added;
  }
  ll->length++;
}

void LL_prepend(linkedlist_t *ll, void *element, size_t size) {
  struct node *to_be_added;

  to_be_added = NODE_new(element, size, NULL, ll->first);
  assert(to_be_added != NULL);

  if (ll->first == NULL) {
    ll->first = to_be_added;
    ll->last = to_be_added;
  } else {
    ll->first = to_be_added;
  }
  ll->length++;
}

void LL_insert(linkedlist_t *ll, void *element, size_t size,
               unsigned int index) {
  unsigned int counter;
  struct node *current;
  struct node *to_be_added;

  if (index == 0) {
    to_be_added = NODE_new(element, size, NULL, ll->first);
    ll->first = to_be_added;
  } else {
    counter = 0;
    current = ll->first;

    while (current != NULL) {
      if (counter == index) {
        to_be_added = NODE_new(element, size, current, current->next);
        current->next = to_be_added;
      }

      counter++;
      current = current->next;
    }
  }
  ll->length++;
}

void *LL_get(linkedlist_t *ll, unsigned int index) {
  unsigned int counter;
  struct node *current;

  counter = 0;
  current = ll->first;
  while (current != NULL) {
    if (counter == index) {
      return current->element;
    }

    counter++;
    current = current->next;
  }
  return NULL;
}
