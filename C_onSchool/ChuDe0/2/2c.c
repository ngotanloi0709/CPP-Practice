//Viet chuong trinh nhap vao 2 so nguyen, tinh tong, hieu, tich, thuong

#include <stdio.h>

int main() {
	int a, b;//input
	float thuong;//thuong a so thuc
	
	printf("> Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("> Nhap so nguyen b: ");
	scanf("%d", &b);
	
	thuong = (float)a / (float)b;
	
	printf("> Tong cua a va b: %d\n", a + b);
	printf("> Hieu cua a va b: %d\n", a - b);
	printf("> Tich cua a va b: %d\n", a * b);
	printf("> Thuong cua a va b: %.2f\n", thuong);
	return 0;
}
