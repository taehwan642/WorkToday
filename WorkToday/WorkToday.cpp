#define _CRT_SECURE_NO_WARNINGS

#include "WorkToday.h"
#include <stdio.h>
#include <fstream>
#include <iostream>


#define MAX_SIZE 1000
using namespace std;
void StartToday(Pilot* today)
{
	FILE* fp = fopen("C:\\Users\\taehw\\OneDrive\\���� ȭ��\\WorkToday-master\\WorkToday\\WorkToday.txt", "w+");
	fputs(today->All, fp);
	fclose(fp);
}

void AddToday(Pilot* today)
{
	FILE* fp = fopen("C:\\Users\\taehw\\OneDrive\\���� ȭ��\\WorkToday-master\\WorkToday\\WorkToday.txt", "a");
	fputs("\n", fp);
	fputs(today->All, fp);
	fclose(fp);
}

void Other()
{
	char inputString[MAX_SIZE];

	// ���� �Է� (����)
	ofstream outFile("output.txt");

	for (int i = 0; i < 10; i++) {
		outFile << i << endl;
	}

	outFile.close();
	//���� ��� (�б�)
	ifstream inFile("output.txt");

	while (!inFile.eof()) {
		inFile.getline(inputString, 100);
		cout << inputString << endl;
	}
	inFile.close();
}

//fgets �Է� �� �޾ƿ��� ���� ���������;
int main(void)
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
		//���� ����ϱ�. in_line�̾��� �ű⿡�ٰ� string in ���� �������ߴ��Ͱ���;
		break;
	}
	default:
		val = -1;
		break;
	}

	
	return 0;


}