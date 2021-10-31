//in ra so armstrong tu 1 den n. su dung 3 vong lap. co duyet input
#include <stdio.h>
#include <stdlib.h>
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
    int i;
    int n = 1;

    do {
        if (n <= 0) printf("> Vui long nhap so nguyen duong lon hon 0!!!\n");
        printf("> Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("> Day so Armstrong tu 1 den %d la:\n", n);
    for (i = 1; i <= n; i++) {
        if (armstrongNumberChecking(i) == 1) printf("%d\n", i);
    }
    return 0;
}