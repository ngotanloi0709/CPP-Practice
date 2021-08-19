//http://csloj.ddns.net/problem/267/statistics/fastest
//khau con doi xung dai nhat

#include <iostream>
#include <string>
using namespace std;

int findTheSymmetricPoint(string input, int startPoint) { //firstPoint
	startPoint += 1;
	int n = input.length();
	
	for (int i = startPoint; i < n; i++) {
		if (input[i - 1] == input[i + 1] || input[i] == input[i + 1]) {
			return i;
		}
	}
	return 0;	
}

int findTheLastPointFromFirstPoint(string input, int firstPoint) {//lastPoint
	int count = firstPoint;
	for (int i = firstPoint; input[i] == input[i + 1]; i++) {
		count += 1;
	}
	return count;
}

int findThelackValueBetweenFirstAndLastPoint(string input, int firstPoint, int lastPoint) {//theLack
	int result = 0;
	for (int i = firstPoint; i < lastPoint; i++) {
		result += 1;
	}
	return result;
	
}

void longestSymmetricString(string input) {
	int n = input.length();
	int maxValue = 0;
	
	int check = findTheSymmetricPoint(input, 0);
	if (check == 0) {
		cout << 1;//khong co doi xung trong khau = defaultCount;
	} else {
		for (int i = 1; i < n; i++) {
			int count = 1;//khai bao cac bien
			int increasingIndex = 1;
			int defaultCondition = 1;
			int firstPoint = check;
			int lastPoint = findTheLastPointFromFirstPoint(input, firstPoint);
			int lack = findThelackValueBetweenFirstAndLastPoint(input, firstPoint, lastPoint);
			do {//mainAlgorithm
				if (firstPoint - increasingIndex < 0 || lastPoint + increasingIndex > n) {
					break;
				}
				
				if (input[firstPoint - increasingIndex] == input[lastPoint + increasingIndex]) {
					increasingIndex += 1;
					count += 2;
				}
				defaultCondition += 1;
			} while (defaultCondition == increasingIndex);
			count += lack;
			
			check = findTheSymmetricPoint(input, check);
			
			if (maxValue < count) {
				maxValue = count;
			}
		}
		cout << maxValue;	

	}
}

int main() {
	//string input = "abcdcbb";
	//string input = "aba";
	//string input = "cosntmrhufmgnviyvkajhpbbphjakvyivngmfuhrmtnxfsamrxywii";
	//string input = "tpltlcmrovpdgimfnktqgpoqksdttxsivcacvisxttdskqowewkhlxoordxverpd";
	//int result = findTheSymmetricPoint(input);
	//cout << result;
	string input;
	cin >> input;
	longestSymmetricString(input);
	//int result = findTheLastPointFromStartPoint(input, 3);
	//cout << result;
	//int result = findThelackValueBetweenFirstAndLastPoint(input, 3, 4);
	//cout << result;
	return 0;
}

