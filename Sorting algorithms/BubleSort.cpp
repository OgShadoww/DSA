#incude<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> a) {
	for(int i = 0; i < a.size(); i++) {
		for(int j = 0; j < a.size()-1; j++) {
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main() {
	vector<int> arr = {64, 25, 12, 22, 11}; 
	bubbleSort(arr); 
	 
	for (int i = 0; i < arr.size(); i++) { 
		cout << arr[i] << " "; 
	} 
	cout << endl;
}