#include <stdio.h>

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;

  return;
}

void bubbleSort(int arr[]) {
  

  return;
}

int main() {
  int arr[6] = {5, 3, 1, 2, 7, 4};
  printf("%d %d", arr[0], arr[2]);
  swap(&arr[0], &arr[2]);
  printf("\n");
  printf("%d %d", arr[0], arr[2]);

	return 0;
}
