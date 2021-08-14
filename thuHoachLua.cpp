//https://luyencode.net/problem/THUHOACH
//input: so bao, tai trong toi da cua xe, khoi luong tung bao
//output: khoi luong toi da co the tai va thu tu cua bao tai duoc chon de cho

#include <iostream> 
using namespace std;

void TheMaxCapacityBelowTheLimit(int n, int limit, int arr[]) {
	int maxTemp;
	int maxCapacity = 0;
	
	for (int i = 0; i < n; i++) {
		maxTemp = arr[i];
		////////////////////////////////////////////////////////////
		for (int j = 0; j < n; j++) {
			if (i == j) {
				 continue;
			}
			////////////////////////////////////////////////////////
			if (maxTemp + arr[j] <= limit) {
				maxTemp += arr[j];
			}
			if (maxCapacity < maxTemp) {
				maxCapacity = maxTemp;
			}
		}
		////////////////////////////////////////////////////////////
		if (maxTemp == limit) {
				break;
		}
	}
	//////////////////////////////////////////////////////////////
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
	
	TheMaxCapacityBelowTheLimit(n, limit, arr);
	return 0; 
}
