//selectionSortDemonstration

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
		int min = i;
		for (int j = i + 1; i < n; i++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

int main() {
	int n = 5;
	int arr[n] = {64, 25, 12, 22, 11};
	cout << "before sort" << endl;
	printArr(arr, n);
	cout << endl << "after sort" << endl;
	increasingSort(arr, n);
	printArr(arr, n);
	return 0;
}
