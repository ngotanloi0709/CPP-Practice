//Tinh to hop va chinh hop
//input: n  k
//output: n! hoac nCk hoac nAk (hoan vi, chinh hop, to hop) - cac ky hieu cua bai toan dua tren may tinh casio
//tham khao: https://minhng.info/toan-hoc/hoan-vi-chinh-hop-to-hop.html
//hoanvi = !
//chinhhop = A
//tohop =C

#include <iostream>
using namespace std;

int hoanVi(int n) {
	int result = 1;
	for (int i = 0; i < n; i++) {
		result = result * (i + 1);
	}
	return result;
}

void chinhHop(int n, int k) {
	int result = ((hoanVi(n)) / (hoanVi(n - k)));
	cout << "> " << n << "A" << k << " = " << result;
}

void toHop(int n, int k) {
	int result = ((hoanVi(n)) / (hoanVi(k) * hoanVi(n - k)));
	cout << "> " << n << "C" << k << " = " << result;
}
/////////////////////////////////////////////////////////////////////////////
int checkingChoice() {
	cout << "> 1. Hoan Vi   (!)" << endl;
	cout << "> 2. Chinh Hop (A)" << endl;
	cout << "> 3. To Hop    (C)" << endl << endl;
	cout << "> Nhap yeu cau cua ban: ";
	int check;
	cin >> check;
	while (!(check == 1 || check == 2 || check == 3)) {
		system("cls");
		cout << "> 1. Hoan Vi   (!)" << endl;
		cout << "> 2. Chinh Hop (A)" << endl;
		cout << "> 3. To Hop    (C)" << endl << endl;
		cout << "> Yeu cau cua ban khong co trong tuy chon!!!" << endl << "> Vui long nhap lai: ";
		cin >> check;
	}
	return check;
}

int main() {
	int check = checkingChoice();
	int n;
	int k;
	int hoanvi_Result;
	
	if (check == 1) {
		cout << "> Nhap N: ";
		cin >> n;
		hoanvi_Result = hoanVi(n);
		cout << "> " << n << "! = " << hoanvi_Result;
	} else {
		cout << "> Nhap N: ";
		cin >> n;
		cout << "> Nhap K: ";
		cin >> k;
		if (check == 2) {
			chinhHop(n, k);
		} else if (check == 3) {
			toHop(n, k);
		}
	}
	
	return 0;
}



