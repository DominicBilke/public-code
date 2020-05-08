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
	cout << "Eingabe: " << greeting << endl;

	system("pause");

	return 0;
}