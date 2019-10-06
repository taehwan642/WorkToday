#include "WorkTodayTest.h"
#define _CRT_SECURE_NO_WARNINGS

void First()
{
	char inputString[MAX_SIZE];

	// 파일 입력 (쓰기)
	ofstream outFile("WorkToday.txt");

	for (int i = 0; i < 10; i++) {
		outFile << i;
	}

	outFile.close();
	//파일 출력 (읽기)
	ifstream inFile("WorkToday.txt");

	while (!inFile.eof()) {
		inFile.getline(inputString, 100);
		cout << inputString << endl;
	}
	inFile.close();
}

void Test()
{
	char a[60];
	cin.getline(a, 60);
	cout << a << endl;
}

