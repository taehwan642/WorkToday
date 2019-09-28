#define _CRT_SECURE_NO_WARNINGS

#include "WorkToday.h"
#include <stdio.h>
#include <fstream>
#include <iostream>


#define MAX_SIZE 1000
using namespace std;
void StartToday(Pilot* today)
{
	FILE* fp = fopen("C:\\Users\\taehw\\OneDrive\\바탕 화면\\WorkToday-master\\WorkToday\\WorkToday.txt", "w+");
	fputs(today->All, fp);
	fclose(fp);
}

void AddToday(Pilot* today)
{
	FILE* fp = fopen("C:\\Users\\taehw\\OneDrive\\바탕 화면\\WorkToday-master\\WorkToday\\WorkToday.txt", "a");
	fputs("\n", fp);
	fputs(today->All, fp);
	fclose(fp);
}

void Other()
{
	char inputString[MAX_SIZE];

	// 파일 입력 (쓰기)
	ofstream outFile("output.txt");

	for (int i = 0; i < 10; i++) {
		outFile << i << endl;
	}

	outFile.close();
	//파일 출력 (읽기)
	ifstream inFile("output.txt");

	while (!inFile.eof()) {
		inFile.getline(inputString, 100);
		cout << inputString << endl;
	}
	inFile.close();
}

//fgets 입력 및 받아오기 실행 시켜줘야함;
int main(void)
{
	int val = 0;
	int forval = 0;

	Pilot p;
	cout << "오늘 할 일을 초기화 하시려면 1, 오늘 할 일을 더하시려면 2를, 오늘 할 일을 출력하시려면 3번을 누르세요." << endl;
	cin >> val;
	switch (val)
	{
	case 1:
		system("cls");
		cout << "오늘 처음으로 할 일을 적어주세요!" << endl;
		cin >> p.All;
		StartToday(&p);
		break;
	case 2:
		system("cls");
		cout << "오늘 할 일을 몇개 추가하시겠습니까?" << endl;
		cin >> forval;
		for (int i = 0; i < forval; i++)
		{
			cin >> p.All;
			AddToday(&p);
			cout << "Added :" << p.All << endl;
		}
		break;
	case 3:
	{
		//파일 출력하기. in_line이었나 거기에다가 string in 적고 개지랄했던것같음;
		break;
	}
	default:
		val = -1;
		break;
	}

	
	return 0;


}