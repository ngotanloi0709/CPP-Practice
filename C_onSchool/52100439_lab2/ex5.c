//tim so dau va cuoi cua 1 so.
//bai toan duoc thiet ke danh cho so nguyen
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numberOfDigitsChecking(int n) { // kiem tra xem co bao nhieu chu so
    int checking;
    int result = 0;
    int powCount = 0;

    do {
        checking = abs(n) / pow(10, powCount);
        result += 1;
        powCount += 1;
    } while (checking >= 10);

    return result;
}

int firstDigit(int n) {
    return abs(n) / pow(10, numberOfDigitsChecking(n) - 1);
}

int lastDigit(int n) {
    return abs(n) % 10;
}

int main() {
    int n;
    printf("> Nhap n: ");
    scanf("%d", &n);
    //printf("%d", numberOfDigitsChecking(abs(n)));
    printf("> Chu so dau tien cua %d la: %d\n", n, firstDigit(n));
    printf("> Chu so cuoi cung cua %d la: %d", n, lastDigit(n));
    return 0;
}