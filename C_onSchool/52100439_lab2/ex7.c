//Viet chuong trinh nhap vao 1 so va nhan cac chu so trong so do
#include <stdio.h>

int productOfAllDigits(int n) {
    int result = 1;
    int lastDigit;

    while(n != 0) {//tham khao bai 6 bat dau tu day
        lastDigit = n % 10;
        result *= lastDigit;
        n /= 10;//remove lastDigit of n
    }

    return abs(result);
}

int main() {
    int n;

    printf("> Nhap vao 1 so: ");
    scanf("%d", &n);

    if (n == 0) printf("> Tich cua cac chu so co trong %d la: 0", n);
    else printf("> Tich cua cac chu so co trong %d la: %d", n, productOfAllDigits(n));
    return 0;
}