#incude<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int> a) {
	vector<int> resutl;
	int minI = 0;
	
	while (!a.empty()) { 
		int minIndex = 0; 
		for (int i = 1; i < a.size(); i++) { 
			if (a[i] < a[minIndex]) { 
				minIndex = i; 
			} 
		} 
		result.push_back(a[minIndex]); 
		a.erase(a.begin() + minIndex); 
	}
	
	return result;
}

int main() {
	vector<int> arr = {64, 25, 12, 22, 11}; 
	vector<int> sortArr = selectionSort(arr); 
	
	for (int i = 0; i < arr.size(); i++) { 
		cout << sortArr[i] << " "; 
	} 
	
	return 0;
}