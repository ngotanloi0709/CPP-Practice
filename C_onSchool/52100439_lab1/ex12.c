//Nhap vao 3 goc cua tam giac va kiem tra xem no co tao thanh 1 tam giac hay khong
//dieu kien la khong co goc nao = 0 va 3 goc + lai bang 180 do
#include <stdio.h>

int main() {
	int a, b, c;// 3 goc cua tam giac
	printf("> Nhap 3 goc cua tam giac:\n");//input mac dinh la so nguyen
	printf("> Nhap goc thu nhat: ");
	scanf("%d", &a);
	printf("> Nhap goc thu hai:  ");
	scanf("%d", &b);
	printf("> Nhap goc thu ba:   ");
	scanf("%d", &c);
	
	if (a + b + c != 180 || a == 0 || b == 0 || c == 0) {
		printf("> 3 goc nay khong the tao thanh 1 tam giac!!!");
	} else printf("> 3 goc nay co the tao thanh 1 tam giac!!!");
	
	return 0;
}
