//chuyen tu he thap phan sang he nhi phan
//y tuong 20dec = 2^4 + 2^2
//lay 4 va 2 lam moc de chuyen
//testCase tu trang https://www.rapidtables.com/convert/number/binary-to-decimal.html
//de long long int ma van ko du cho de bieu dien :( nen chu doi so nho dc thui
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int negativeNumberChecking(int n) {
    if (n < 0) return 1;
    return 0;
}

int decToBin(int n) {
    int tempInput = n;
    n = abs(n);
    long long int result = 0;

    while (n > 0) {
        int powBiggestCheck;
        int temp;
        for (powBiggestCheck = 0; pow(2, powBiggestCheck) <= n; powBiggestCheck++) temp = powBiggestCheck;

        result += pow(10, temp);
        n -= pow(2, temp);
    }
    
    if (negativeNumberChecking(tempInput) == 0) return result;
    else return -result;
}

int main() {
    int n;

    printf("> Nhap chu so o he 10 muon chuyen doi: ");
    scanf("%d", &n);

    printf("> %d thap phan = %d nhi phan.", n, decToBin(n));
    return 0;
}