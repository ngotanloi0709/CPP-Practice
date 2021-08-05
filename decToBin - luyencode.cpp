//https://luyencode.net/problem/DEC2BIN
//doi tu he thap phan sang nhi phan
//bai nay minh lam theo yeu cau output tren luyencode nen kho sua cho dep, sua lai so so thoi!!
#include <iostream>
using namespace std;

void dec2bin(int arr[], int n) {
	int count;
	int temp;
	int arrOutput[100];
	for (int i = 0; i < n; i++) { 
		temp = arr[i];
		for (int j = 0; temp > 0; j++) {
			arrOutput[j] = temp % 2;
			temp = temp / 2;
			count = j + 1;
		}
		cout << "> Gia tri "<< arr[i] << " duoc buoi dien o he nhi phan nhu sau : ";
		for (int i = count - 1 ; i >= 0; i--) {
			cout << arrOutput[i];
		}
		cout << endl;
		count = 0;
	}
}							  

int main() {
	cout << "> Chuong trinh chuyen doi tu He thap phan sang He nhi phan#" << endl;
	int n;
	cout << "> Nhap so phan tu muon chuyen doi: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cout << "> Nhap phan tu thu " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout <<endl;
	
	dec2bin(arr, n);
	return 0;
}
