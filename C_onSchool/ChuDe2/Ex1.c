//Viet chuong trinh nhap vao 3 canh cua tam giac
//Kiem tra 3 canh co tao thanh tam giac khong, neu tao thanh tam giac thi do la tam giac deu, can hay vuong
//Tinh dien tich tam giac theo cong thuc da cho trong de bai
//Bai tap chua co tinh nang duyet input
#include <stdio.h>
#include <math.h>

int triAngleCheck(float a, float b, float c) { // kiem tra xem day co phai tam giac khong
	if (a + b > c && a + c > b && b + c > a) return 1;
	return 0;
}

void triAnglePropertiesCheck(float a, float b, float c) { // kiem tra xem day la tam giac gi
	if (a == b && b == c) printf("> Day la tam giac deu!\n");
	else if (a == b || a == c || b == c) printf("> Day la tam giac can!\n");
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2)|| pow(a, 2) + pow(c, 2) == pow(b, 2) ||pow(b, 2) + pow(c, 2) == pow(a, 2)) printf("> Day la tam giac vuong!\n");
	else printf("> Day la tam giac thuong!\n");
}

void triAngleArea(float a, float b, float c) { // tinh dien tich bang cong thuc de bai
	float p = (a + b + c) / 2;
	float result = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("> Dien tich cua tam giac nay la: %.2f\n", result);
}

int main() {
	float a, b, c;// 3 canh cua tam giac
	
	printf("> Nhap 3 canh cua tam giac: \n");
	printf("> Canh thu nhat: ");
	scanf("%f", &a);
	printf("> Canh thu hai:  ");
	scanf("%f", &b);
	printf("> Canh thu ba:   ");
	scanf("%f", &c);

	if (triAngleCheck(a, b, c) == 0) printf("> Day khong phai la 1 tam giac!!!\n");
	else {
		triAnglePropertiesCheck(a, b, c);
		triAngleArea(a, b, c);
	}
	
	return 0;
}
