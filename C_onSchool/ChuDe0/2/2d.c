//Viet chuong trinh tinh bieu thuc trong de(tu coi)

#include <stdio.h>
#include <math.h>

int main() {
	float input, result;
	
	printf("> Nhap so nguyen x: ");
	scanf("%f", &input);
	
	result = (3 * pow(input, 5) + 2 * input + sqrt(input + 1)) / (5 * pow(input, 2) - 3);
	
	printf("> Ket qua cua bieu thuc la: %.2f", result);
	return 0;
}
