//Nhap vao 2 so nguyen. in ra +, -, *, /, %
#include <stdio.h>

int main() {
	int a, b;
	
	printf("> Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("> Nhap so nguyen b: ");
	scanf("%d", &b);
	
	printf("> a + b = %d\n", a + b);
	printf("> a - b = %d\n", a - b);
	printf("> a * b = %d\n", a * b);
	printf("> a / b = %d\n", a / b);
	printf("> a %% b = %d\n", a % b);
	return 0;
}
