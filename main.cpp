#include"lex.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	lex test;
	cout << "正在读入test.pas文件......" << endl;
	cout << "正在创建输出文件......" << endl;

	if (freopen("test.pas", "r", stdin) != NULL)
	{
		while (test.lexAnalyze());
		cout << "分析完成" << endl;
	}

	system("pause");
}