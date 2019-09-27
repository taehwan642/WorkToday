#define _CRT_SECURE_NO_WARNINGS

#include "WorkToday.h"
#include <stdio.h>
#include <iostream>
using namespace std;
void AddToday(Pilot* today)
{
	FILE* fp = fopen("C:\\Users\\skill_7\\Desktop\\WorkToday\\WorkToday\\WorkToday.txt", "a");
	

	fputs("\n", fp); 

	fputs(today->All, fp);

	fclose(fp);

}

int main(void)
{
	Pilot p;
	cin >> p.All;
	AddToday(&p);
}