//Viet chuong trinh nhap vao 1 ki tu bat ky. 
//Xuat ra ma ascii cua ky tu do. Neu ky tu la chu hoa thi bien thanh chu thuong va nuoc lai.

#include <stdio.h>

char capToUncapAndReverse(char input) {
	if (input >= 97 && input <= 122) {
		input -= 32;
	}
	else input += 32;
	return input;
}

int main() {
	char input;
	printf("> Nhap chu cai: ");
	scanf("%c", &input);
	
	printf("> Ma cua chu cai %c vua nhap la: %d\n", input, input);
	
	if (input >= 97 && input <= 122) {
		printf("> Tu %c chuyen sang chu hoa la: %c", input, capToUncapAndReverse(input));
	} else {
		printf("> Tu %c chuyen sang chu thuong la: %c", input, capToUncapAndReverse(input));
	}
	return 0;
}
