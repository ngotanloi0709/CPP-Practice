//quickSortDemonstrate

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

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int right = high - 1;
	int left = low;
	while (true) {
		while (left <= right && arr[left] < pivot) left++;//xac dinh cac phan tu < pivot cho den khi gap phan tu > pivot
		while (right >= left && arr[right] > pivot) right--; //xac dinh cac phan tu > pivot cho den khi gap phan tu < pivot
		
		if (left < right) { // dua phan tu lon hon pivot ra sau, phan tu nho hon pivot ra truoc
			swap(arr[left], arr[right]);
			left++;
			right--;
		} else {
			break;
		}
	}
	swap(arr[left], arr[high]);
	return left;	
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int mainPirot = partition(arr, low, high);
		
		quickSort(arr, low, mainPirot - 1);//de quy
		quickSort(arr, mainPirot + 1, high);
	}
}

int main() {
	int arr[6] = {5, 4, 3, 2, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "> Before Sort: " << endl;
	arrPrint(arr, n);
	
	cout << endl <<"> After Sort: " << endl;
	quickSort(arr, 0, n - 1);//increasingSort
	arrPrint(arr, n);
	
	return 0;
}
