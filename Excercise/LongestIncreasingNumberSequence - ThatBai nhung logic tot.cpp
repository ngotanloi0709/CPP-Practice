//https://luyencode.net/problem/DCTDN3
//input  1 2 5 4 6 2 5 6 8
//output 6 ( 1 2 4 5 6 8)
//bai nay minh danh 7 tieng de lam ma chang dau vao dau, 1 dong lo hong

#include <iostream>
using namespace std;

bool arrExistedValueCheck(int arr[], int n) {
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] == n) {
			return true;
		}
	}
	return false;
}

int checkTheNearestValue(int arr[], int j) {
	int condition = 0;
	int check;
	int index = 1;
	while (condition == 0) {
		for (int i = j; i < j + 100; i++) {//chu y
			if (arr[i] == arr[j] + index) {
				check = arr[i];
				return check;
			}
		}
		index += 1;
	}
}

void LongestIncreasingNumberSequence(int arr[], int n) {
	int max = 0;
	
	for (int i = 0; i < n; i++) {
		int tempArr[n - i]; //chu y//khai bao ngoai chuong trinh chinh
		tempArr[0] = arr[i]; //chu y
		int tempArrPosition = 1;//chu y
		
		///////////////////////////////////////////////////////////////////////////////////////////////
		int countIn = i;
		for (int j = i; j < n; j++) {
			if (j <= countIn) {
				continue;	
			}
			int check = checkTheNearestValue(arr, countIn);//chu y
			if (arr[j] == check && arrExistedValueCheck(tempArr, arr[j]) == false) {// loai bo nhung phan tu khong du dieu kien
				tempArr[tempArrPosition] = arr[j];
				countIn = j;
			} else {
				tempArr[tempArrPosition] = 0;
			}
			tempArrPosition += 1;
			//check = checkTheNearestValue()
		}
		///////////////////////////////////////////////////////////////////////////////////////////////
		for (int k = 0; k < sizeof(tempArr) / sizeof(tempArr[0]); k++) {//cheking
			cout << tempArr[k] << " ";									//
		}																//
		cout <<endl;													//	
		///////////////////////////////////////////////////////////////////////////////////////////////
		int secCount = 0;
		for (int h = 0; h < sizeof(tempArr) / sizeof(tempArr[0]); h++) { // Dem so luong phan tu ton tai
			if (tempArr[h] / 1 != 0) {
				secCount++;
			}
		}
		if (secCount > max) {
			max = secCount;
		}
	}
	cout << max;
}

int main() {
//	int n = 10;
//	int arr[10] = {5, 1, 2, 5, 4, 6, 2, 5, 6, 8};
//	int n = 6;
//	int arr[n] = {1, 2, 5, 4, 6, 2};
	int n = 8;
	int arr[n] = {1, 3, 5, 1, 9, 5, 4, 2};

//	int n;
//	cin >> n;
//	int arr[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
	
	LongestIncreasingNumberSequence(arr, n);
	return 0;
}
