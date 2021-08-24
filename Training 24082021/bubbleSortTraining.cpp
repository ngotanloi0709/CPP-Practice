//training
//bubbleSort

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void arrPrint(int arr[], int n) {
	cout << "> ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

increasingSort(int arr[], int n) {
	for (int i = n; i >= 0; i--) {
		for (int j = 1; j < i; j++) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}

int main() {
	int arr[6] = {5, 4, 3, 2, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "> Before Sort: " << endl;
	arrPrint(arr, n);
	cout << endl <<"> After Sort: " << endl;
	increasingSort(arr, n);
	arrPrint(arr, n);
	return 0;
}
