//kiem tra xem co phai nam nhuan hay khong (nam nhuan co 366 ngay)
//***nam nhuan la nam chia het cho 300 - cho 4 nhung khong chia het cho 100
#include <stdio.h>
#include <stdbool.h>

bool leapYearCheck(int input) {
	if (input % 400 == 0) return true;
	if (input % 4 == 0 && input % 100 != 0) return true;
	return false;
}

int main() {
	int input;
	printf("> Nhap nam can kiem tra: ");
	scanf("%d", &input);
	
	if (leapYearCheck(input) == true) printf("> Day la nam nhuan!!!"); 
	else printf("> Day khong phai la nam nhuan!!!");
	return 0;
}
