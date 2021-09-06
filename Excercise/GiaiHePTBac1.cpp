//https://luyencode.net/problem/GPTB1
//giai he phuong trinh bac nhat
//tham khao: https://vungoi.vn/lop-9/chi-tiet-ly-thuyet-he-hai-phuong-trinh-bac-nhat-hai-an-5af5065e5bd1fb72d28d0d7f.html

#include <iostream>
#include <cmath>
using namespace std;

void giaiHePhuongTrinhBacNhat(float a, float b, float c, float d, float e, float f) {
	float x, y;
	if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) { // trong c ++ 0/0 khong duoc
		cout << "> Phuong trinh co Vo so Nghiem!!!";
	} else if ((a == 0 && b == 0) || (d == 0 && e == 0)) { //trong he pt bac 1, 1 pt co a,b = 0 thi auto vo nghiem, cai nay tu mo ra :>
		cout << "> Phuong trinh Vo Nghiem!!!";
	} else if ((a / d == b / e) && !(b / e == c / f)) {
		cout << "> Phuong trinh Vo Nghiem!!!";
	} else if ((a / d == b / e) && (b / e == c / f)) {
		cout << "> Phuong trinh co Vo so Nghiem!!!";
	} else {
		x = (c * e - b * f) / (a * e - b * d);
		y = (c - a * x) / b;
		if (x == -0) { //cha hieu tai sao ket qua lau lau no ra - 0 nen phai lam vay
			x = 0;
		}
		cout << "> Phuong trinh co Nghiem la:" << endl;
		cout << "> x = " << x << endl;
		cout << "> y = " << y;
	}
}

int main() {
	cout << "> Chuong trinh giai he phuong trinh bac nhat: " << endl;
	cout << "<-> ax + by = c" << endl;
	cout << "<-> dx + ey = f" << endl << endl;
	
	float a, b, c, d, e, f;
	cout << "> Nhap a: "; cin >> a; cout << "  ";
	cout << "> Nhap b: "; cin >> b; cout << "    ";
	cout << "> Nhap c: "; cin >> c; 
	cout << endl;
	cout << "> Nhap d: "; cin >> d; cout << "  ";
	cout << "> Nhap e: "; cin >> e; cout << "    ";
	cout << "> Nhap f: "; cin >> f; 
	cout << endl;
	giaiHePhuongTrinhBacNhat(a, b, c, d, e, f);
	return 0;
}
