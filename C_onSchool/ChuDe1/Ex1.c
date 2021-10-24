//tinh toan cac bieu thuc theo yeu cau de bai
#include <stdio.h>
#include <math.h>

int main() {
	float input;
	float resultOfA, resultOfB, resultOfC, resultOfD;
	
	printf("> Nhap x: ");
	scanf("%f", &input);
	
	resultOfA = pow(2, 3) + pow(5, 2) + 7 * input + 15;
	resultOfB = pow(sin(input), 2) + pow(cos(2 * input), 2) + pow(tan(3 * input), 2);
	resultOfC = pow(input + 10, input + 5);
	resultOfD = log10(input + 100);
	
	printf("a) %.f\n", resultOfA);
	printf("b) %.2f\n", resultOfB);
	printf("c) %.f\n", resultOfC);
	printf("d) %.2f\n", resultOfD);
	
	return 0;
}
