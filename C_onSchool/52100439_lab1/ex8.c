//Tim so lon nhat trong 2 chu so input
#include <stdio.h>

int main() {
	float a, b;
	printf("> Nhap 2 so a va b: \n");
	printf("> Nhap a: ");
	scanf("%f", &a);
	printf("> Nhap b: ");
	scanf("%f", &b);
	
	if (a > b) printf("> So lon nhat la: %.2f", a);
	else printf("> So lon nhat la: %.2f", b);
	return 0;
}
