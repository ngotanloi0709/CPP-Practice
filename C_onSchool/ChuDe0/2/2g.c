//Tim so lon nhat trong  2 so nguyen a va b

#include <stdio.h>

int main() {
	int a, b;
	
	printf("> Nhap a: ");
	scanf("%d", &a);
	printf("> Nhap b: ");
	scanf("%d", &b);
	
	if (a > b) printf("> a lon hon b");
	else if (a < b) printf("> a nho hon b");
	else printf("> a bang b");
	
	return 0;
}
