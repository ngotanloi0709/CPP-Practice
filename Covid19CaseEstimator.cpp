//https://luyencode.net/problem/COVID19
//INPUT: 1 ngay lay cho ? nguoi, so ngay ?, so nguoi ban dau bi nhiem  ?
//OUTPUT: tong so nguoi nhiem
//vd: he so = 4, so ngay = 1, so nguoi ban dau = 1 thi output la 5

#include <iostream>
using namespace std;

void caseEstimator(int initialCases, int multiplierEveryday, int days) {
	int casesCausePerPerson = 1;
	if (days == 0) {
		cout << "> Tong so ca mac la: " << 1;
	} else {
		for (int i = 1; i <= days; i ++) {
			casesCausePerPerson *= multiplierEveryday;
		}
		cout << "> Tong so ca mac la: " << casesCausePerPerson * initialCases + initialCases;
	}
}

int main() {
	long days, initialCases, multiplierEveryday;
	cout << "> Nhap so ca mac ban dau: "; 								cin >> initialCases;
	cout << "> Nhap so ca ma mot nguoi co the lay trong mot ngay: "; 	cin >> multiplierEveryday;
	cout << "> Nhap so ngay da troi qua: "; 							cin >> days;
	
	caseEstimator(initialCases, multiplierEveryday, days);
	return 0;
}

