//Tinh gia tri tuyet doi cua input
#include <stdio.h>
#include <math.h>
int main() {
	float input;
	printf("> Nhap so can tinh gia tri tuyet doi: ");
	scanf("%f", &input);
	
	printf("> Gia tri tuyet doi cua %.2f la: %.2f", input, fabs(input));
	return 0;
}
