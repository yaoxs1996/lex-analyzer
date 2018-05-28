#ifndef LEX_H_
#define LEX_H_

#include<fstream>

class lex
{
private:
	std::ofstream outFile;
	std::ofstream errFile;
	int lineNum;

public:
	lex();
	~lex();

	bool lexAnalyze();
	char getnbc(char ch);
	void error(int lineNum, int errType);
	void retract(char &ch);
	int isReverse(char* token);
	bool isDigit(char ch);
	bool isLetter(char ch);
};

#endif
