#ifndef ARRAY_H
#define ARRAY_H

#include <stddef.h>

typedef struct array {
  int size;
  int capacity;
  int *array;
} array;

void init_array(array *a, size_t initial_cap);
int get(array *a, int i);
void push(array *a, int v);
void pop(array *a);
void ensure_capacity(array *a);
void free_array(array *a);

#endif
