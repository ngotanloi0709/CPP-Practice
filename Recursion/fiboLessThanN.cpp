//de quy - Fibonacci

#include <iostream>
using namespace std;

int fiboDetermination(int n) {
	if (n == 0)  return n;
	if (n == 1)  return n;
	return fiboDetermination(n - 2) + fiboDetermination(n - 1);
}

void fibonacci(int n) {
	for (int i = 0; fiboDetermination(i) < n; i++) {
		cout << fiboDetermination(i) << " ";
	}
}

int main() {
	cout << "> Nhap N: ";
	int n; cin >> n;
	
	cout << endl << "> Day Fibonacci < N: ";
	fibonacci(n);
	return 0;
}
