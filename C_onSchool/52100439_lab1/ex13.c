//Nhap vao diem cua 5 mon hoc: physics, chemistry, biology, mathematics, computer.
//Xet mac dinh dua tren thang diem 10( tu cho vi de bai khong ro rang)
//Dua tren thang diem 10 de danh gia diem
//>= 9 A
//>= 8 B
//>= 7 C
//>= 6 D
//>= 4 E
//< 4 F
#include <stdio.h>
float averageScore(float ly, float hoa, float sinh, float toan, float tin) {
	return (ly + hoa + sinh + toan + tin) / 5;
}

void gradeDetermination(float input) {
	if (input >= 9) printf("> Hoc sinh dat diem A");
	else if (input >= 8) printf("> Hoc sinh dat diem B");
	else if (input >= 7) printf("> Hoc sinh dat diem C");
	else if (input >= 6) printf("> Hoc sinh dat diem D");
	else if (input >= 4) printf("> Hoc sinh dat diem E");
	else printf("> Hoc sinh dat diem F");
}

int main() {
	float ly, hoa, sinh, toan, tin;
	
	printf("> Nhap diem cua cac mon hoc:\n");
	printf("> Nhap diem mon Ly:   ");
	scanf("%f", &ly);
	printf("> Nhap diem mon Hoa:  ");
	scanf("%f", &hoa);
	printf("> Nhap diem mon Sinh: ");
	scanf("%f", &sinh);
	printf("> Nhap diem mon Toan: ");
	scanf("%f", &toan);
	printf("> Nhap diem mon Tin:  ");
	scanf("%f", &tin);
	
	gradeDetermination(averageScore(ly, hoa, sinh, toan, tin));
	return 0;
}
