#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdlib.h>

#define VECTOR_DEFAULT_CAPACITY 128

typedef struct {
  void *data;
  size_t size;
  size_t capacity;
  size_t type_size;
} vector;

vector *init_vector(size_t type_size);

// Add ellements to the vector
int append(vector *v, void *data);
int prepend(vector *v, void *data);
int insert(vector *v, void *data, int i);

// Remove ellements from the vector
int pop_back(vector *v);
int pop_front(vector *v);
int erase(vector *v, int i);

void *get(vector *v, int i);

void free_vector(vector *v);

#endif
