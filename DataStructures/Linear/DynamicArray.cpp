#include<iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

    void resize() {
        capacity *= 2;
        int newArr = new int[capacity];
        for(int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
public:
    DynamicArray(int cap = 2) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    void push_back(int val) {
        if(size == capacity) {
            resize();
        }
        arr[size++] = val;
    }
    void pop_back() {
        if(size > 0) size--;
    }

    int operator[] (int index) {
        if (index < size) return arr[index];
        throw out_of_range("Index out of range");
    }

    int get_size() {
        return size;
    }
    int get_capacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] arr;
    }
}

int main() {

    return 0;
}