#include "../../../include/vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void error() {
  
}

vector *init_vector(size_t type_size) {
  vector *v = malloc(sizeof(*v));
  v->type_size = type_size;
  v->capacity = VECTOR_DEFAULT_CAPACITY;
  v->size = 0;
  v->data = calloc(VECTOR_DEFAULT_CAPACITY, v->type_size);

  return v;
}

int append(vector *v, void *data) {
  if(sizeof(*data) != v->type_size) return -1;

  if(v->size + 1 == v->capacity) {
    v->capacity *= 2;
    v->data = realloc(v->data, v->capacity*v->type_size);
  }

  memcpy(v->data + (v->size * v->type_size), data, v->type_size);
  v->size++;

  return 0;
}

int main() {
  vector *v = init_vector(sizeof(char));

  char c = 'c';
  //int a = 32;
  append(v, &c);
  //append(v, &a);

  for(int i = 0; i < v->size; i++) {
    printf("%c", *(int*)v->data+i);
  }
}
