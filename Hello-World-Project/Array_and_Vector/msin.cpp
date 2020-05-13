//
//  main.cpp
//  Array_and_Vector
//
//  Created by Dominic Bilke on 13.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
//  Umgang mit Array und Vector
//

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main(int argc, const char* argv[]) {

	// ein vector von namen
	vector<string> vecNames = { "Max", "Monika" };

	cout << endl << "Alle Vector-Einträge: " << endl;

	for (unsigned int i = 0; i < vecNames.size(); i++) {
		cout << vecNames.at(i) << endl;
	}

	// ein Array von Namen
	array < string, 2> arrNames = { "Max", "Monika" };

	cout << endl << "Alle Array-Einträge: " << endl;

	for (unsigned int i = 0; i < arrNames.size(); i++) {
		cout << arrNames.at(i) << endl;
	}


	// Ein double Array
	array<double, 5> a = { 2.0, 3.0, 4.0, 5.0, 6.0 };

	cout << endl << "Alle Array-Einträge: " << endl;

	for (unsigned int i = 0; i < a.size(); i++) {
		cout << setprecision(2) << double(a.at(i)) << endl;
	}

	// Summe des double-Arrays
	double sum = 0.0;
	for (const double element : a) {
		sum = sum + element;
	}

	// mittelwert des double Arrays
	cout << endl << "Mittelwert des Arrays: " << endl;
	cout << (sum / a.size()) << endl;

	system("pause");

	return 0;
}