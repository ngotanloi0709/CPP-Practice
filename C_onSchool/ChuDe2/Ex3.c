//kiem tra ky tu nhap vao la nguyen am hay phu am
//co 5 nguyen am: 
//a=65, 97
//e=69, 101
//o=79, 111
//i=73, 105
//u=85, 117
//con lai la phu am
//Bai tap chua co tinh nang duyet input
#include <stdio.h>

int main() {
	char input;
	printf("> Nhap ky tu can kiem tra: ");
	scanf("%c", &input);
	
	if (input == 65 || input == 97 || input == 69 || input == 101 || input == 79 || input == 111 || input == 73 || input == 105 || input == 85 || input == 117 ) {
		printf("> Day la nguyen am!!!");
	} else printf("> Day la phu am!!!");
	
	return 0;
}
