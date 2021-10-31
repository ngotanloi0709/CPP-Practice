//Nhap vao 1 so va in ra dao nguoc cua no(ban nang cap cua bai 9
//bai nay minh build lai tu dau ko dua tren base cua may bai truoc
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int negativeNumberChecking(int n) {
    if (n < 0) return 1;
    return 0;
}

int numberOfDigitsChecking(int n) {//cai nay cung la ham dem so nhung minh viet ngan hon :3   
    int count = 0;

    do {
        n /= 10;
        count++;
    } while (n > 0);

    return count;
}

int lastDigit(int n) {
    return abs(n) % 10;
}

int reversedNumber(int n) {
    int negativeNumberCheck = negativeNumberChecking(n);
    n = abs(n);
    ////////////////////////////////////////////////////////
    int result = 0;
    int digits = numberOfDigitsChecking(n);
    int currentPositionCheck = pow((float)10, (float)digits - 1);

    do {
        result += lastDigit(n) * currentPositionCheck;
        n /= 10;
        currentPositionCheck /= 10;
    } while (currentPositionCheck > 0);

    if (negativeNumberCheck == 1) return - result;
    return result;
}

int main() {
    int n;
    printf("> Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    printf("> Dao nguoc cua %d la: %d", n, reversedNumber(n));
    //printf("%d", numberOfDigitsChecking(n));
    return 0;
}