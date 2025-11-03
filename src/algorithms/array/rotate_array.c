#include<stdlib.h>
#include<stdio.h>
#include"../../../include/array.h"

// The fucntion receive the array a and integer k, and rotate it by k steps

void rotate_array(array *a, int k) {
  array res;
  init_array(&res);
  for(int i = k; i < a->size; i++) {
    push(&res, a->array[i]);
  }
  for(int i = 0; i < k; i++) {
    push(&res, a->array[i]);
  }
   
  a = *res; 
}

int main() {
  array a;
  init_array(&a);
  for(int i = 0; i < 10; i++) {
    push(&a, i);
  }
  rotate_array(&a, 2);
  for(int i = 0; i < 10; i++) {
    printf("%d", get(&a, i));
  } 

  return 0;
}
