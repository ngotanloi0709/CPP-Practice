//in ra so hoan hao tu 1 den n
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int perfectNumberChecking(int n) {
    int i;
    int result = 0;

    if (n == 0) return 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) result += i;
    }

    if (result == n) return 1;
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

    printf("> Day so hoan hao tu 1 den %d la:\n", n);
    for (i = 1; i <= n; i++) {
        if (perfectNumberChecking(i) == 1) printf("%d\n", i);
    }
    return 0;
}