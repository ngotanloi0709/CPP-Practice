//Viet chuong trinh dao vij tri dau va cuoi cua 1 so
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
    while (n / 10 >= 1) {
        n /= 10;
    }
    return abs(n);
}

int lastDigit(int n) {
    return abs(n) % 10;
}

int swapFirstAndLastDigit(int n) {
    int negativeNumberCheck = n;//Kiem tra input co phai so am ko, neu la so am thi xuat ra *-1
    n = abs(n);//Trong moi truong hop thuat toan phai chay o dang so duong

    int first = firstDigit(n);//tim so dau
    int last = lastDigit(n);//tim so cuoi
    int range = last - first;//tim gia tri hut nhau cua 2 so
    int digits = numberOfDigitsChecking(n);//Kiem tra chieu dai cua so

    int powTemp = pow(10, digits - 1);//10^x ko the thuc hien ham pow o dang double

    int result = last * powTemp;//ghi ra giay de hieu them
    n %= powTemp;
    result += n;
    result -= range;

    if (negativeNumberCheck < 0) return -result;
    return result;
}

int main() {
    int n;
    
    printf("> Nhap n: ");
    scanf("%d", &n);

    printf("> Swap so dau va so cuoi cua %d: %d", n, swapFirstAndLastDigit(n));
    return 0;
}