//Nhap vao 1 so, In ra man hinh so do * tu 1 -> 10(giong nhu bang cuu chuong)

#include <stdio.h>
int i;

int main() {
    //input mac dinh la so nguyen
    int n;
    printf("> Nhap so nguyen n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}