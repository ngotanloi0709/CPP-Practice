//kiem tra xem co phai la so armstrong hay khong
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int numberOfDigitsChecking(int n) {  
    int count = 0;

    do {
        n /= 10;
        count++;
    } while (n > 0);

    return count;
}

int lastDigits(int n) {
    return n % 10;
}

int armstrongNumberChecking(int n) {
    int digits = numberOfDigitsChecking(n);
    int inputCompareToResult = n;
    int result = 0;

    while (n > 0) {
        int last = lastDigits(n);
        result += pow(last, (float)digits);

        n /= 10;
    }

    if (result == inputCompareToResult) return 1;
    return 0;
}

int main() {
    int n;
    printf("> Nhap mot so nguyen duong can kiem tra: ");
    scanf("%d", &n);

    if (armstrongNumberChecking(n) == 1) printf("> %d la mot so Armstrong!!!", n);
    else printf("> %d khong phai la mot so Armstrong!!!", n);
    return 0;
}