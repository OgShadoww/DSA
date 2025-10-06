#include<stdio.h>

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

void SelectionSort(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    int small = arr[0];
    if(arr[i] < small) {
      small = arr[i];
    }
  }
}

int main() {
  int arr[6] = {5, 2, 3, 6, 1, 4}; 

  return 0;
}
