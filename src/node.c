//
// Created by adam on 11/6/22.
//

#include "node.h"
#include <stdlib.h>

struct node *NODE_new(void *element, size_t size, struct node *prev,
                      struct node *next) {
  struct node *res;

  res = malloc(sizeof(struct node));
  if (res == NULL) {
    return NULL;
  }

  res->element = element;
  res->size = size;
  res->prev = prev;
  res->next = next;
  return res;
}
