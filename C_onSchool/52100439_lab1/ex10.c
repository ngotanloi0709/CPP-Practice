//Kiem tra xem so nhap vao la so chan hay so le
#include <stdio.h>
int abs(int n) {//cygwin ko co abs
	if (n < 0) return -n;
	return n;
}

int main() {
	int n;
	printf("> Nhap so nguyen can kiem tra: ");//mac dinh la kiem tra so nguyen
	scanf("%d", &n);
	
	if (n == 0) printf("> 0 khong co tinh chan le!!!");
	else if (abs(n) % 2 == 0) printf("> %d la so chan!!!", n);
	else printf("> %d la so le!!!", n);
	return 0;
}
