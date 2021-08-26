//linearSearchDemonstration

#include <iostream>
using namespace std;

void arrPrint(int arr[], int n) {
	cout << "> ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

void arrSearch(int arr[], int n, int target) {
	cout << "--> Phan tu can tim kiem nam o vi tri: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) cout << i << " ";
	}
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 9;
	arrPrint(arr, n);
	
	arrSearch(arr, n, target);
	return 0;
}
