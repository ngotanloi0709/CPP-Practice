//Tim so lon nhat trong 3 so
#include <stdio.h>

int main() {
	float a, b, c;
	printf("> Nhap 3 so: \n");
	printf("> Nhap a: ");
	scanf("%f", &a);
	printf("> Nhap b: ");
	scanf("%f", &b);
	printf("> Nhap c: ");
	scanf("%f", &c);
	
	float max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("> So lon nhat trong 3 so la: %.2f", max);
	return 0;
}
