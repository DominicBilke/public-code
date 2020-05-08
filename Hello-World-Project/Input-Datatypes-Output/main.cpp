//
//  main.cpp
//  HalloWelt
//
//  Created by Dominic Bilke on 08.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {

	string greeting = "Hello World!";

	cout << "Variable: " << greeting << endl;
	cout << "Variable: " << greeting << endl << endl;

	cout << "Bitte eingeben: ";
	cin >> greeting;

	cout << "Eingabe: " << greeting << endl;
	cout << "Eingabe: " << greeting << endl << endl;

	long longA = 12;
	long longB = 34;

	cout << "SizeOf (long): " << sizeof(long) << endl;
	cout << "Variable (long a): " << longA << endl;
	cout << "Variable (long b): " << longB << endl;
	cout << "Rechnung (long a+b): " << long(longA + longB) << endl << endl;

	string strA = "12";
	string strB = "34";

	cout << "SizeOf (string): " << sizeof(string) << endl;
	cout << "Variable (string a): " << strA << endl;
	cout << "Variable (string b): " << strB << endl;
	cout << "Rechnung (string a+b): " << string(strA + strB) << endl << endl;

	char charA = '1';
	char charB = '5';

	cout << "SizeOf (char): " << sizeof(char) << endl;
	cout << "Variable (char a): " << charA << endl;
	cout << "Variable (char b): " << charB << endl;
	cout << "Rechnung (char a+b): " << char(charA + charB) << endl << endl;

	short shortA = 32000;
	short shortB = 30000;

	cout << "SizeOf (short): " << sizeof(short) << endl;
	cout << "Variable (short a): " << shortA << endl;
	cout << "Variable (short b): " << shortB << endl;
	cout << "Rechnung (short a+b): " << short(shortA + shortB) << endl << endl;

	int intA = 60000;
	int intB = 33000;

	cout << "SizeOf (int): " << sizeof(int) << endl;
	cout << "Variable (int a): " << intA << endl;
	cout << "Variable (int b): " << intB << endl;
	cout << "Rechnung (int a+b): " << int(intA + intB) << endl << endl;

	float floatA = 2.5;
	double doubleB = 2.5;

	cout << "SizeOf (float): " << sizeof(float) << endl;
	cout << "SizeOf (double): " << sizeof(double) << endl;
	cout << "Variable (float a): " << floatA << endl;
	cout << "Variable (double b): " << doubleB << endl;
	cout << "Rechnung (double a+b): " << double(floatA + doubleB) << endl << endl;

	system("pause");

	return 0;
}