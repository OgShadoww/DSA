#ifndef ARRAY_H
#define ARRAY_H

typedef struct array {
  int size;
  int capacity;
  int *array;
} vector;

array init_array();
int get(array a, int i);
void push(array &a, int v);
void pop(array &a);
void ensure_capacity(array &a);
void free_vector(array &a);

#endif
