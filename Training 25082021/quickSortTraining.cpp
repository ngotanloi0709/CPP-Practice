//training 
//quickSort

#include <iostream>
using namespace std;
void arrPrint(int arr[], int n) {
	cout << "--> ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int partition(int arr[], int left, int right) {
	int l = left;
	int r = right - 1;
	int check = arr[right];
	
	while (true) {
		while (l <= r && arr[l] <= check) l++;
		while (r >= l && arr[r] >= check) r--;
		
		if (l < r) {
			swap(arr[l], arr[r]);
			l++;
			r--;
		} else break;
	} 
	swap(arr[l], arr[right]);
	return l;
}

void quickSort(int arr[], int left, int right) {
	if (left < right) {
		int pivitPoint = partition(arr, left, right);
		
		quickSort(arr, left, pivitPoint - 1);
		quickSort(arr, pivitPoint + 1, right);
	}
}

int main() {
	int arr[8] = {1,4,7,5,8,4,2,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "> Before Sort: " << endl;
	arrPrint(arr, n);
	cout << endl << "> After Sort: " << endl;
	quickSort(arr, 0, n - 1); //increasing
	arrPrint(arr, n);
	return 0;
}
