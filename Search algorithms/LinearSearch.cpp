#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int f) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == f) {
            return i;
        }
    }

    return -1;
}

int main() {

    
    return 0;
}