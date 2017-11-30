/*
Max Del Rio
Homework 4
Date Due: Thu, 9 Nov 2017
Make a program that asks the user to enter a base ten integer number. The program will convert this into binary, the larget base ten interger to convert being 256. After the program does the conversion ask the user if they want to quit the program or run it again.
*/

#include "Homework4.h"
// Initialize private members to 0
Number::Number() {
	NumbersToBeConverted = 0;
	Rem = 0;
	Num = 0;
	Change = 0;
}

void Number::InputData() {
	//Get number to be converted to binary from user
	cout << "Please enter a number to be converted to binary: " << endl;
		cin >> NumbersToBeConverted;
	
} 

void Number::Convert() {	
	int i = 0;
			//Convert from decimal to binary
			do
			{
				Num = NumbersToBeConverted / 2;
				Rem = NumbersToBeConverted % 2;
				Change = (char)Rem + '0';
				outPutBuff[i] = Rem;
				NumbersToBeConverted = Num;
				i++;
			} while (Num > 0);

			--i;
			//Prints binary number
			cout << "Your number in binary is: ";
			while (i >= 0) {
				printf("%d", outPutBuff[i]);
				i--;
			}
	cout << endl;
	
}


int main() {
	Number obj;
	char ch = 0;
	
	while (ch != 'q') {
		obj.InputData();
		obj.Convert();
			cout << "To quit the program press 'q' or to run it again press 'y' " << endl;
			cin.ignore();
			ch = cin.get();

		}
		
	system("Pause");
	return 0;
}