#include "WorkTodayTest.h"
#define _CRT_SECURE_NO_WARNINGS

void First()
{
	char inputString[MAX_SIZE];

	// ���� �Է� (����)
	ofstream outFile("WorkToday.txt");

	for (int i = 0; i < 10; i++) {
		outFile << i;
	}

	outFile.close();
	//���� ��� (�б�)
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

