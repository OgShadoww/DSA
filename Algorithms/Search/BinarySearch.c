#include<stdio.h>

int binarySearch(int vector[], int left, int right, int n) {
    while(left < right) {
        int mid = (left + right) / 2;
        if(n > vector[mid]) {
            left = mid;
        }
        if(n < vector[mid]) {
            right = mid;
        }
        if(n == vector[mid]) {
            return mid;
            break;
        }
    }
    return -1;
}

int main() {
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", binarySearch(vector, 0, 9, 0)); 
}
