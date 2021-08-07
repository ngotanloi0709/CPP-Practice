//Input: So nguyen N (00000)
//Output: So luong chu so cua no (1)
//https://luyencode.net/problem/VL10
//Luu y: khong co truong hop so bat dau = 0
#include <iostream>
#include <cmath>
using namespace std;

void numberCounting(int n) {
	int test = 1;
	int count = 0;
	
	if (n == 0) {
		count = 1;
	} else {
		while (abs(n) / test >= 1) {
			count = count + 1;
			test = test * 10;
		}
	}
	cout << "> "<< n << " la so co " << count << " chu so!!!";
}

int main() {
	int n;
	cout << "> Nhap so ban muon kiem tra: ";
	cin >> n;
	numberCounting(n);
	return 0;
}
//bai nay roi vai :(( moi dau lam dung phuc tap, khuc sau lam lai ra dung ngan :(
