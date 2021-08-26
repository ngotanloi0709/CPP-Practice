//binarySearchDemonstration

#include <iostream>
using namespace std;

void arrPrint(int arr[], int n) {
	cout << "> ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

void arrSearch(int arr[], int l, int r, int target) {
	int mid = (l + r) / 2;
	
	if (arr[mid] == target) cout << mid << " ";
	else if (arr[mid] < target) arrSearch(arr, mid + 1, r, target);
	else if (arr[mid] > target) arrSearch(arr, l, mid - 1, target);	
}

int main() {
	//int arr[5] = {1, 9, 5, 7, 3};// han che , bug cua binarysearch
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 9;
	arrPrint(arr, n);
	cout << "--> Phan tu can tim kiem nam o vi tri: ";
	arrSearch(arr, 0, n, target);
	return 0;
}
