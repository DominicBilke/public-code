//
//  main.cpp
//  Functions
//
//  Created by Dominic Bilke on 11.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
//  Arbeiten mit Funktionen
//

#include <iostream>

using namespace std;

void doSomething(string word)
{
	cout << word.length() << ": " << word << endl;
}

void printMulti(string word, int n) {
	for (int i = 0; i<n; i++)
		cout << word.length() << ": " << word << endl;
}

int f(int x) {
	cout << "int f(int x);" << endl;
	return x * x;
}

double f(double x) {
	cout << "double f(double x);" << endl;
	return x * x;
}

bool palindrome(string word) {
	int length = word.length();
	for (int i = 0; i < length; i++)
		if (word[i] != word[length - i - 1])
			return false;
	return true;
}

int main(int argc, const char* argv[]) {

	doSomething("Hello World!");
	doSomething("Hello Mars!");
	doSomething("Hello Jupiter!");

	printMulti("Hello!!!", 4);

	cout << endl;
	cout << "f(x) = x*x;" << endl;
	cout << "f(2) = " << f(2) << endl;
	
	cout << endl;
	cout << "f(x) = x*x;" << endl;
	cout << "f(2.5) = " << f(2.5) << endl;
    cout << endl;

	if (palindrome("ABBA"))
		cout << "ABBA ist ein Palindrom." << endl << endl;
	else 
		cout << "ABBA ist kein Palindrom." << endl << endl;


	if (palindrome("TISCH"))
		cout << "TISCH ist ein Palindrom." << endl << endl;
	else
		cout << "TISCH ist kein Palindrom." << endl << endl;

	system("pause");

	return 0;
}