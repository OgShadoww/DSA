#include<stdio.h>
#include<stdlib.h>
#include"../../../include/array.h"

void init_array(array *a, size_t initial_cap) {
  a->size = 0;
  a->capacity = 64;
  a->array = malloc(a->capacity);
  return;
}

void ensure_capacity(array *a) {
  if(a->capacity <= a->size) {
    a->capacity *= 2;
    a->array = realloc(a->array, a->capacity);
  }
  return;
}

int get(array *a, int i) {
  if(i >= 0 && i <= a->size) {
    return a->array[i];
  }
  perror("Failed to get element: Out of range");
  exit(-1);
}

void push(array *a, int v) {
  ensure_capacity(a);
  a->array[a->size] = v;
  a->size++;
  return;
}

void pop(array *a) {
  i(a->size <= 0) {
    perror("The array is empty to pop element");
    exit(-1);
  }
  else {
    a->size--;
  }
  return;
}

void free_array(array *a) {
  free(a->array);
  a->size = 0;
  a->capacity = 0;     
  return;
}
