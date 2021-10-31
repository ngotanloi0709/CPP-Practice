//Kiem tra ky tu nhap vao co nam trong ban alphanumeric hay khong(google asci code)
#include <stdio.h>

int main() {
	char input;
	printf("> Nhap ky tu can kiem tra: ");
	scanf("%c", &input);
	
	if (((int)input >= 48 && (int)input <= 57) || ((int)input >= 65 && (int)input <= 90) || ((int)input >= 97 && (int)input <= 122)) {
		printf("> Ky tu %c nam trong bang alphanumeric!!!", input);
	} else printf("> Ky tu %c khong nam trong bang alphanumeric!!!", input);
	return 0;
}
