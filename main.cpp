#include"lex.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	lex test;
	cout << "���ڶ���test.pas�ļ�......" << endl;
	cout << "���ڴ�������ļ�......" << endl;

	if (freopen("test.pas", "r", stdin) != NULL)
	{
		while (test.lexAnalyze());
		cout << "�������" << endl;
	}

	system("pause");
}