#define _CRT_SECURE_NO_WARNINGS

#include "WorkToday.h"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#define MAX_SIZE 1000
using namespace std;
void StartToday(Pilot* today)
{
	char a[60];	
	FILE* fp = fopen("WorkToday.txt", "w+");
	/*cin.getline(a, 60);
	fputs(a, fp);*/
	fclose(fp);
}

void AddToday(Pilot* today)
{

	FILE* fp = fopen("WorkToday.txt", "a");
	fputs("\n", fp);
	fputs(today->All, fp);

	fclose(fp);
}
void OutPutToday()
{
	char inputString[MAX_SIZE];

	ifstream inFile("WorkToday.txt");
	while (!inFile.eof())
	{
		inFile.getline(inputString, 100);
		cout << inputString << endl;
	}
	inFile.close();
}
void Other()
{
	char inputString[MAX_SIZE];

	ofstream outFile("output.txt");
	char a[60];
	cin.getline(a, 60);
	outFile << a << endl;

	outFile.close();

	ifstream inFile("output.txt");

	while (!inFile.eof()) {
		inFile.getline(inputString, 100);
		cout << inputString << endl;
	}
	inFile.close();
	//fgets() is usable too.
}

void GANG()
{
	int val = 0;
	int forval = 0;

	Pilot p;
	cout << "���� �� ���� �ʱ�ȭ �Ͻ÷��� 1, ���� �� ���� ���Ͻ÷��� 2��, ���� �� ���� ����Ͻ÷��� 3���� ��������." << endl;
	cin >> val;
	switch (val)
	{
	case 1:
		system("cls");
		cout << "���� ó������ �� ���� �����ּ���!" << endl;
		cin >> p.All;
		StartToday(&p);
		break;
	case 2:
		system("cls");
		cout << "���� �� ���� � �߰��Ͻðڽ��ϱ�?" << endl;
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
		system("cls");
		OutPutToday();
		break;
	}
	default:
		val = -1;
		break;
	}
	return;
}
int main(void)
{
	Other();
}