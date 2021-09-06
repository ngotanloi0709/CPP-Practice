//https://luyencode.net/problem/COUNTINGSHEEP
//input 1 ouput 10
//input 2 out put 90
//ex: tat ca cac chu so n ban dau(input) duoc nhan theo cap so tu 1,2,3,... cho den khi du cac chu so tu 0 -> 9
//luu y ve  sstream de bien doi number sang string
//input
//5
//0
//1
//2
//11
//1692
//output
//Awake!
//10
//90
//110
//5076
#include <iostream>
#include <cmath>
using namespace std;

int countingNumber(int n) {
	int count = 0;
	int increasingIndex = 1;
	
	while (n / increasingIndex >= 1) {
		increasingIndex *= 10;
		count++;
	}
	return count;
}

void countingSheep(int n) {
	int increasingIndex = 1;
	int increasingInputToOutPutValue ;
	int count = 0;
	int check;
	
	int arr[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	
	if (n == 0) {
		cout << "awake!" << endl;
	} else {
		while (count < 10) {
			increasingInputToOutPutValue = n * increasingIndex;
			check = countingNumber(increasingInputToOutPutValue);
			
			for (int i = 0; i < check; i++) {
				int tempCount = 0;
				int tempValue;
				int x = pow(10, i + 1);
				int y = pow(10, i);
				tempValue = (increasingInputToOutPutValue % x) / y;
				
				for (int j = 0; j < 10; j++) {
					if (tempValue == arr[j]) {
						tempCount++;
					}
				}
				
				if (tempCount == 0) {
					arr[count] = tempValue;
					count++;
				}
			}
			increasingIndex++;
		}
		cout << increasingInputToOutPutValue << endl;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		countingSheep(arr[i]);
	}
	return 0;
}
