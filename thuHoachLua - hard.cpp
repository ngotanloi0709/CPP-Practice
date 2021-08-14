//https://luyencode.net/problem/THUHOACH
//input: so bao, tai trong toi da cua xe, khoi luong tung bao
//output: khoi luong toi da co the tai va thu tu cua bao tai duoc chon de cho
//cach ma minh lam:
//b1: sort tu lon den be
//b2: cong lai co dieu kien nho hon limit, moi lan tang mot vi tri bat dau cong va cong them ca nhung phan tu dau tien da bo qua
//b3: chon ra cai nao co gia tri lon nhat nho hon limit
//luu y:

#include <iostream> 
using namespace std;

void theMaxCapacityBelowTheLimit(int n, int limit, int arr[]) {
	//decreasingSort
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr [j];
				arr[j] = temp;
			}
		}
	}
	//mainAlgorithm
	int maxTemp = 0;
	int maxCapacity = 0;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] > limit) {//Chu y
			continue;
		}
		///////////////////////////////////////////////////////////////////////5 4 3 3 3 max 11/ 5 4 2 2 2 max 10
		maxTemp = arr[i];
		for (int j = i + 1; j < n; j++) {
			if (maxTemp + arr[j] <= limit) {
				maxTemp += arr[j];
			}
			for (int k = 0; k < i; k++) { //Chu y
				if (maxTemp + arr[k] <= limit) {
					maxTemp += arr[k];
				}
			}
			if (maxCapacity < maxTemp) {
				maxCapacity = maxTemp;
			}
		}
		///////////////////////////////////////////////////////////////////////
		if (maxTemp == limit) {//Chu y
			break;
		}
	}
	cout << endl << "> So luong toi da ma xe co the cho duoc la: " << maxCapacity;
}

int main() {
	int n;
	cout << "> Nhap so luong bao lua: "; cin >> n;
	
	int arr[n];
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "> Nhap so luong bao thu " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	int limit;
	cout << endl << "> Nhap so luong toi da ma xe co the cho duoc : ";
	cin >> limit;
	
	theMaxCapacityBelowTheLimit(n, limit, arr);
	return 0; 
}
