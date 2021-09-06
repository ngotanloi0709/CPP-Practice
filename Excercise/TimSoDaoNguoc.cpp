//input: 1234
//output: 4321
//https://luyencode.net/problem/VL18

#include <iostream>
#include <cmath>

using namespace std;
void reversingNumber(int n) {
	int test = 1;
	int count = 0;
	int result;
	cout << "> So da duoc dao nguoc: ";
	
	while (n / test >= 1) {
		count = count + 1;
		test = test * 10;
	}
	
	
	if (n == 0) {
		cout << 0;
	} else {
		for (int i = 0; i < count; i++) {
			int x = pow(10, i + 1);
			int y = pow(10, i);
			result = (n % x) / (y);
			cout << result;  
		}
	}
}


int main() {
	cout << "> Nhap so can dao nguoc: ";
	int n;
	cin >> n;
	reversingNumber(n);
	return 0;
}


