//minh hoa cho thuat toan sap xet chen (insertion sort)

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void increasingSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int check = arr[i];//dua gia tri dang kiem tra ra mot bien rieng
		int j = i - 1; //vi tri dang truoc gia tri dang kiem tra
		while (j >= 0 && check < arr[j]) {//neu gia tri dang truoc gia tri dang kiem tra lon hon no thi push gia tri dang truoc len chinh vi tri cua no
			arr[j + 1] = arr[j];
			j -= 1;//va giam vi tri di mot bac nua
		}
		arr[j + 1] = check;//[j + 1] vi gia su neu kiem tra giua 1 va 2. Khi j la 1 va dieu kien push khong dien ra thi vi tri i bang voi vi tri j + 1 van la chinh no
	}
}

int main() {
	int n = 5;
	int arr[n] = {12, 11, 13, 5, 6};
	cout << "before sort: " << endl;
	printArr(arr, n);
	cout << endl << "after sort: " << endl;
	increasingSort(arr, n); //ham sap xep theo thuat toan sap xep chen
	printArr(arr, n);
	return 0;
}
