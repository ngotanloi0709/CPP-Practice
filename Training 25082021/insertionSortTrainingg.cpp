//training
//insertionSort

#include <iostream>
using namespace std;

void arrPrint(int arr[], int n) {
	cout << "> ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void increasingSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int temp  = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = temp;
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
