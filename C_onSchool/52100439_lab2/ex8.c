//Dem cac chu so co trong 1 so da nhap
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

int main() {
    int n;
    
    printf("> Nhap n: ");
    scanf("%d", &n);

    printf("> Cac chu so co trong %d la: %d",n ,numberOfDigitsChecking(n));
    return 0;
}