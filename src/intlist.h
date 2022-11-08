//
// Created by adam on 11/6/22.
//

#ifndef LINKEDLIST_INTLIST_H
#define LINKEDLIST_INTLIST_H

#include "linkedlist.h"
#include <stddef.h>

void IL_append(linkedlist_t *ll, int *element);

void IL_prepend(linkedlist_t *ll, int *element);

int IL_get(linkedlist_t *ll, unsigned int index);

void IL_print(linkedlist_t *ll);

#endif // LINKEDLIST_INTLIST_H
