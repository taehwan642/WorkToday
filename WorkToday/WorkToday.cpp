#include<iostream>
#include<fstream>
#include<string>
#include <conio.h>
using namespace std;

int i = 0;
void Input()
{
	char a[100];
	ofstream out("WorkToday.txt");
	cout << "TYPE THINGS YOU NEED TO DO TODAY" << endl;
	//�Է�
	for (int j = 2; j <= 3; j++)
	{
		cin.getline(a, 100);
		out << a << endl;
	}
	i++;
	out.close();

}

void Output()
{
	cout << "WorkToday!" << endl << endl;
	string in_line;

	ifstream in("WorkToday.txt");

	while (getline(in, in_line))
		cout << in_line << endl; //���

	in.close();
}

int main()
{
	while (1)
	{

		int i = _getch();
		if (i == 224) {
			i = _getch();
			//���� �� switch����� , ����Ű�� �Է¹޴°�, ��¹޴°�, �ð�...��� �ΰ����� �͵��� ��������!
			switch (i) {
			case 72: system("cls"); Input();
			case 80: system("cls"); Output();
			case 75: /*cout << "left";*/ break;
			case 77: /*cout << "right";*/ break;
			}
		}
		else if(i != 224)
		{
			cout << "WELCOME! PRESS ANY KEY TO SEE SETTINGS!" << endl;
		}
		cout << endl << "=======================================" << endl << "KEY DOWN == OUTPUT" << endl << endl;
		cout << "KEY UP == INPUT" << endl << "=======================================" << endl;
	}

}


