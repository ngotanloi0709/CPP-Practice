//de quy - tinh tong cua n so
#include <iostream>
using namespace std;

int sum(int n) {
	if (n > 0) return n + sum(n - 1);
}

int main() {
	cout << "> Nhap N: ";
	int n; cin >> n;
	cout << endl << "> Tong cua cac so tu 0 den " << n << " la: " << sum(n);  
	return 0;
}
