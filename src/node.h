//
// Created by adam on 11/6/22.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

#include <stddef.h>

struct node {
  void *element;
  size_t size;

  struct node *prev;
  struct node *next;
};

struct node *NODE_new(void *element, size_t size, struct node *prev,
                      struct node *next);

#endif // LINKEDLIST_NODE_H
