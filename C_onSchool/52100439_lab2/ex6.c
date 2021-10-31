//Viet chuong trinh nhap vao 1 so va cong cac chu so trong so do
//Cach lam ngan hon o ex7(ex6 va ex7 tuong tu)
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

int sumOfAllDigits(int n) {
    int result = 0;
    int powCount = 1;

    while (powCount <= numberOfDigitsChecking(n)) {
        int x1 = pow(10, powCount);
        int x2 = pow(10, powCount - 1);
        result += (abs(n) % x1) / x2;
        powCount++;
    }

    return result;
}

int main() {
    int n;

    printf("> Nhap vao 1 so: ");
    scanf("%d", &n);

    printf("> Tong cua cac chu so co trong %d la: %d", n, sumOfAllDigits(n));
    return 0;
}