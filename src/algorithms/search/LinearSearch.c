#include<stdio.h>

int LinearSearch(int vector[], int size, int n) {
    for(int i = 0; i < size; i++) {
        if(vector[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vector[5] = {1, 2, 3, 4, 5}; 
    int size = 5;
    
    printf("%d", LinearSearch(vector, size, 3));

    return 0;
}
