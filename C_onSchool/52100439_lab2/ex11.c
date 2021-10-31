//kiem tra xem 1 so co phai la so  palindrome hay khong
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

int firstDigit(int n) {
    while (n / 10 >= 1) {
        n /= 10;
    }

    return abs(n);
}

int lastDigit(int n) {
    return abs(n) % 10;
}

int palindromeNumberCheck(int n) {
    int digits = numberOfDigitsChecking(n);
    //printf("%d\n", digits);
    int limitChecking = digits / 2;// so lan kiem tra, check xem so chu so la le hay chan de tranh bug
    //printf("Limit %d\n", limitChecking);

    while (limitChecking > 0) {
        int first = firstDigit(n);
        int last = lastDigit(n);

        if (first != last) return 0;

        n /= 10;//xoa so dau va cuoi sau khi kiem tra
        digits = numberOfDigitsChecking(n);
        int tempPow = pow(10, (float)(digits - 1));
        n %= tempPow;

        limitChecking--;
    }
    //printf("Limit %d\n", limitChecking);
    return 1;
}

int main() {
    int n;
    printf("> Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (palindromeNumberCheck(n) == 1) printf("> %d la mot so doi xung!!!", n);
    else printf("> %d khong phai la mot so doi xung!!!", n);
    // int first = firstDigit(n);
    // int last = lastDigit(n);
    // printf("first %d", first);
    // printf("last %d", last);
    return 0;
}