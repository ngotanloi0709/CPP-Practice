//Nhap vao so ngay. Chuyen no sang dinh dang nam, tuan, ngay

#include <stdio.h>

void dayConvert(int n) {
	int year = n / 365;//mac dinh 1 nam 365 ngay khong tinh nam nhuan
	int week = (n % 365) / 7;//mac dinh 1 tuan co 7 ngay
	int day = (n % 365) % 7;
	
	printf("> %d ngay = %d Nam %d Tuan %d ngay", n, year, week, day);
}

int main() {
	int n;
	printf("> Nhap so ngay can chuyen doi: ");
	scanf("%d", &n);
	
	dayConvert(n);
	return 0;
}
