#include<stdio.h>

int binarySearch(int arr[], int left, int right, int n) {
  while(right > left) {
    int mid = (right + left) / 2;
    if(n > arr[mid]) {
      left = mid;
    }
    if(n < arr[mid]) {
      right = mid;
    }
    if(n == arr[mid]) {
      return mid;
    }
  }

  return -1;
}

int main() {
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", binarySearch(vector, 0, 9, 5)); 
}
