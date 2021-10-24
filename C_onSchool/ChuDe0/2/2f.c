//tinh dien tich hinh tron

#include <stdio.h>
#include <math.h>

int main() {
	const float pi = 3.14;
	float radius, circleArea;
	
	printf("> Nhap ban kinh cua duong tron: ");
	scanf("%f", &radius);
	
	circleArea = pow(radius, 2) * pi;
	
	printf("> Dien tich cua hinh tron la: %.2f", circleArea) ;
	return 0;
}
