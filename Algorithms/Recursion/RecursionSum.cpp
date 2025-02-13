#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<int>& arr) {
    if (arr.size() == 0) {
        return 0;
    } else {
        // Create a copy of the vector excluding the first element
        vector<int> newArr(arr.begin() + 1, arr.end());
        return arr[0] + sum(newArr);
    }
}
 
 
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "The sum of the elements is: " << sum(numbers) << endl;

    cout << "Original vector: ";
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}
