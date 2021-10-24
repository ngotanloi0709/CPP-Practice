//Viet chuong trinh tinh tien dien theo bang gia cua de bai
//Bai tap chua co tinh nang duyet input

#include <stdio.h>
#include <math.h>
int payment(unsigned int n) {
	int scale_1 = 350000 * 100;//100
	int scale_2 = scale_1 + 400000 * 50;//150
	int scale_3 = scale_2 + 450000 * 50;//200
	int scale_4 = scale_3 + 500000 * 100;//300
	
	if (n <= 100) return 350000 * n;
	if (n <= 150) return scale_1 + 400000 * (n - 100);
	if (n <= 200) return scale_2 + 450000 * (n - 150);
	if (n <= 300) return scale_3 + 500000 * (n - 200);
	if (n > 300)  return scale_4 + 550000 * (n - 300);//da test xong tat ca
}

int main() {
	unsigned int n; //input luong dien tieu thu
	
	printf("> Nhap luong dien tieu thu: ");
	scanf("%d", &n);
	
	printf("> So tien phai tra la: %d", payment(n));
	return 0;
}
