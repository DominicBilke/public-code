//
//  main.cpp
//
//  Created by Dominic Bilke on 09.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	int a = 5;
	int b = 2;
	int i = 10;
	bool b1 = false;
	bool b2= false;

	cout << "float 5 / float 2 = " << 5.0 / 2.0 << endl << endl;

	cout << "int 5 / int 2 = " << 5 / 2 << endl << endl;

	cout << "Bitte gib eine ganze Zahl a ein: " << endl;
	cin >> a;

	cout << endl  << "static_cast<double> int a / int 2 : " << static_cast<double>(a) / static_cast<double>(b) << endl << endl;

	i += 5;

	cout << "10 + 5 = " << i << endl << endl;

	cout << "10 > 50 = " << (10 > 50) << endl << endl;

	cout << "bool b1 = " << b1 << endl << endl;

	cout << "bool b2 = " << b2 << endl << endl;

	cout << "(not b1 and not b2) = " << (!b1 && !b2) << endl << endl;

	cout << "Korrelationsmatrix:" << endl;
	cout << "(not true and not true) = " << (!true && !true) << endl;
	cout << "(not true and not false) = " << (!true && !false) << endl;
	cout << "(not false and not true) = " << (!false && !true) << endl;
	cout << "(not false and not false) = " << (!false && !false) << endl << endl;

	system("pause");

	return 0;
}