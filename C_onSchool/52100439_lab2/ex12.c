//kiem tra input dau vao co hop le hay khong. neu hop le kiem tra xem no co phai la so nguyen to hay khong
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primeNumberChecking(int n) {
    int i;
    int count = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    if (count == 2) return 1;
    return 0;
}

int main() {
    int n = 0;
    do {
        if (n < 0) printf("> Vui long nhap so nguyen duong!!!\n");
        printf("> Nhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    if (primeNumberChecking(n) == 1) printf("> %d la mot so nguyen to!!!", n);
    else printf("> %d khong phai la mot so nguyen to!!!", n);
    return 0;
}