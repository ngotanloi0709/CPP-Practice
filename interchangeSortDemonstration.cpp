//selectionSort(increasing) Demonstration

#include <iostream>
using namespace std;

//chuyen doi vi tri cua gia tri
void swap(int &x, int &y) { //&operator dung de chi dia chi
	int temp = x;
	x = y;
	y = temp;
}

void increasingSort(int arr[], int n) {
	//mainAlgorithm
	for (int i = 0; i < n - 1; i++) { //gia tri de doi chieu voi cac phan tu sau no
		for (int j = i + 1; j < n; j++) { //cac gia tri phia sau arr[i] chua duoc sort
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main() {
	int n = 5;
	int arr[n] = {64, 25, 12, 22, 11};
	cout << "before sort: " <<endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	increasingSort(arr, n);
	
	cout << endl << "after sort: " <<endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}

