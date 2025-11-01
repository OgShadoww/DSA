#include<stdio.h>
#include"../../../include/array.h"

array init_array() {
  array a;
  a.size = 0;
  a.capacity = 64;
  a.array = malloc(a.capacity);

  return a;
}

void ensure_capacity(array a) {
  if(a.capacity <= a.size) {
    a.capacity *= 2;
    a.array = realloc(a.array, a.capacity);
  }
  return;
}

void get(array a, int i) {
  if(i >= 0 && i <= a.size) {
    return a[i];
  }
}

void push(array &a, int v) {
  ensure_capacity(a);
  a.array[a.size + 1] = v;
}

int main() {
  array a = init_array() 
}
