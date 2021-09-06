//bubbleSortDemonstration

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void increasingSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

int main() {
	int n = 7;
	int arr[7] = {64, 34, 25, 12, 22, 11, 90};
	cout << "before sort" << endl;
	printArr(arr, n);
	cout << endl << "afterSort" << endl;
	increasingSort(arr, n);
	printArr(arr, n);
	return 0;
}
