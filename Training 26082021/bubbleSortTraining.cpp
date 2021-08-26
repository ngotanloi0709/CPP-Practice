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

void increasingSort(int arr[], int n) {
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
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
