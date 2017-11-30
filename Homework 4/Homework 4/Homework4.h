#pragma once
#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Number {
private:
	short NumbersToBeConverted;
	int Rem;
	int Num;
	char outPutBuff[10];
	char Change;
public:
	void InputData();
	void Convert();	
	Number();
};