#include<stdio.h>

int binarySearch(int vector[], int n, int mid) {
    if(vector[mid] < n) {
	int mid = mid / 2;
        return binarySearch(vector, n, mid);
    }
    if(vector[mid] > n) {
        int mid = mid / 2 + mid + 1;
	return binarySearch(vector, n, mid);
    }
    if(vector[mid] == n) return mid;
    if(vector[mid] != n) return -1;
}

int main() {
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    binarySearch(vector, 4, 5);
}
