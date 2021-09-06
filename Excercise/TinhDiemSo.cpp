//https://luyencode.net/problem/DIEMSO
//tu len web coi yeu cau
//day chi la bai lam don gian, khong loai tru cac truong hop dac biet nhu khoang trang,chu so vi trong yeu cau de khong neu ro
#include <iostream>
using namespace std;

void scoreCalculating(string inputAnswer) {
	int count = 0;
	int totalScore = 0;
	for (int i = 0; i < inputAnswer.length(); i++) {
		if (inputAnswer[i] == 'C') {
			count += 1;
			totalScore += count; 
		} else {
			count = 0;
		} 
	}
	cout << "> Tong so diem: " << totalScore;
}

int main() {
	string inputAnswer;
	cout << " Nhap day dap an cua hoc sinh (lien tiep): ";
	cin >> inputAnswer;
	
	scoreCalculating(inputAnswer);
	return 0;
}
