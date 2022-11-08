//
// Created by adam on 11/6/22.
//

#include "node.h"
#include <stdlib.h>

struct node *new_node(void *element, size_t size, struct node *next) {
  struct node *res;

  res = malloc(sizeof(struct node));
  res->element = element;
  res->size = size;
  res->next = next;
  return res;
}
