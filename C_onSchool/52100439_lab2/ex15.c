//in ra cac so nguyen to tu 1 den n. Co duyet input
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

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
    int i;

    int n = 1;
    do {
        if (n <= 0) printf("> Vui long nhap so nguyen duong lon hon 0!!!\n");
        printf("> Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    printf("> Cac so nguyen to tu 1 den %d la:\n", n);
    for (i = 1; i <= n; i++) {
        if (primeNumberChecking(i) == 1) printf("%d\n", i);
    }

    return 0;
}