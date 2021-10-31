//Tinh giai thua cua so nhap vao tu ban phim
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorialOfInputNumber(int n) {
    int i = 1;
    int result = 1;
    for (i; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("> Nhap so can tinh giai thua: ");
    scanf("%d", &n);

    printf("> Giai thua cua %d la: %d", n, factorialOfInputNumber(n));
    return 0;
}