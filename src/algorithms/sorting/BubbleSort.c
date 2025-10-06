#include <stdio.h>

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;

  return;
}

void bubbleSort(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      if(arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]); 
      }
    }
  }

  return;
}

int main() {
  int arr[6] = {5, 3, 1, 2, 7, 4};
  for(int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  bubbleSort(arr, 6);
  for(int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }

	return 0;
}
