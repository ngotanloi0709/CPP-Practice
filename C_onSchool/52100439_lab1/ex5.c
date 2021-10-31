//Chuyen doi tu do C sang do F
//1 do C = 33.8 do F
#include <stdio.h>

int main() {
	float input;
	printf("> Nhap do C: ");
	scanf("%f", &input);
	
	float output = input * 1.8 + 32;
	printf("> %.1f do C = %.1f do F", input, output);
	
	return 0;
}