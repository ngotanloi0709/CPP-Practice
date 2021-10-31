//kiem tra xem input co phai la so hoan hao hay khong
//nhung so chia het cho input + lai = input thi la so hoan hao
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    int n;
    printf("> Nhap so nguyen duong can kiem tra: ");
    scanf("%d", &n);

    if (perfectNumberChecking(n) == 1) printf("> %d la mot so hoan hao!!!", n);
    else printf("> %d khong phai la mot so hoan hao!!!", n);
    return 0;
}