//nhap a, b. In ra max va min

#include <stdio.h>

int main() {
	int a, b;
	printf("> Nhap a: ");
	scanf("%d", &a);
	printf("> Nhap b: ");
	scanf("%d", &b);
	
	if (a > b) {
		printf("< Min = %d\n", b);
		printf("< Max = %d\n", a);
	} else {
		printf("< Min = %d\n", a);
		printf("< Max = %d\n", b);
	}
	
	return 0;
}
