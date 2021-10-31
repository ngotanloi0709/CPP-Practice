//Nhap chieu dai va chieu rong. Tinh chu vi va dien tich hinh chu nhat.
#include <stdio.h>
#include <math.h>

int main() {
	float d, r;
	
	printf("> Nhap chieu dai: ");
	scanf("%f", &d);
	printf("> Nhap chieu rong: ");
	scanf("%f", &r);

	printf("> Chu vi hinh chu nhat la: %.1f\n", (d + r) * 2);
	printf("> Dien tich hinh chu nhat la: %.1f\n", d * r);
	
	return 0;
}
