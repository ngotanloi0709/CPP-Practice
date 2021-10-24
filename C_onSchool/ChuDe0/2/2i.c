//Nhap ma asci va kiem tra xem no co nam trong bang chu cai khong, neu khong thi in ra ky tu do

#include <stdio.h>

int main() {
	int input;
	printf("> Nhap ma ASCI: ");
	scanf("%d", &input);
	
	if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122)) {
		printf("> %d nam trong day chu cai!", input);
	} else printf("> %d tuong ung voi %c", input, input);
	
	return 0;
}
