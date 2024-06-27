#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> arr, int begin, int end, int f) {    
    if (begin > end) {
        return false;
    }

    int middle = begin + (end - begin) / 2;

    if(arr[middle] == f) {
        cout << "true" << "\n";
        return true;
    }

    if(f > arr[middle]) {
        return binarySearch(arr, middle + 1, end, f);
    } else {
        return binarySearch(arr, begin, middle - 1, f);
    }
}

int main() {
    vector<int> a = {1, 4, 6, 9, 17, 32};

    if (!binarySearch(a, 0, a.size() - 1, 4)) {
        cout << "false" << "\n";
    }
    if (!binarySearch(a, 0, a.size() - 1, 17)) {
        cout << "false" << "\n";
    }

    return 0;
}
