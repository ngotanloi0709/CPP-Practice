//dequy-bai toan giai thua

#include <iostream>
using namespace std;

int giaiThua(int n) {
	if (n > 0) {
		return n * giaiThua(n - 1);
	} else return 1;
}

int main() {
	cout << "> Nhap N: ";
	int n; cin >> n;
	
	cout << endl << "> " << n << "! = " << giaiThua(n);
	return 0;
}
