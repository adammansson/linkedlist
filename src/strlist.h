//
// Created by adam on 11/8/22.
//

#ifndef LINKEDLIST_STRLIST_H
#define LINKEDLIST_STRLIST_H

#include "linkedlist.h"

void SL_append(linkedlist_t *ll, char *element);

void SL_prepend(linkedlist_t *ll, char *element);

void SL_insert(linkedlist_t *ll, char *element, unsigned int index);

char *SL_get(linkedlist_t *ll, unsigned int index);

void SL_print(linkedlist_t *ll);

#endif // LINKEDLIST_STRLIST_H
