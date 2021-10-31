//Viet chuong trinh tinh tong cac so le tu 1 den n. Kiem tra xem input co hop le hay khong?
#include <stdio.h>

int oddNumbersSum(float n) {
    int result = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            result += i;
    }

    return result;
}

int main() {
    float n = 1;
    do {
        if (n < 1)
        printf("> Vui long nhap n la so duong lon hon hoac bang 1!!!\n");
        printf("> Nhap n: ");
        scanf("%f", &n);
    } while (n < 1);

    printf("> Tong cac so le tu 1 den %.1f la: %d", n, oddNumbersSum(n));
    return 0;
}
