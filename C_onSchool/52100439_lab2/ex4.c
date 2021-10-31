//tinh tinh cac so tu nhien tu 1 den n bang cach su dung 3 vong lap. Co duyet input
//so tu nhien la so nguyen khong am(0-> vo cung)
#include <stdio.h>

int naturalNumbersSum(int n) {
    int i = 1;
    int result = 0;

    for (i; i <= n; i++) result += i;

    return result;
}

int main() {
    float n = 1;
    do {
        if (n < 1) printf("> Vui long nhap n la so duong lon hon hoac bang 1!!!\n");
        printf("> Nhap n: ");
        scanf("%f", &n);
    } while (n < 1);

    printf("> Tong cac so tu nhien tu 1 den %.1f la: %d", n, naturalNumbersSum(n));
    return 0;
}