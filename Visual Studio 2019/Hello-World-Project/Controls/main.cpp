//
//  main.cpp
//
//  Created by Dominic Bilke on 09.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
//  Alter eingeben
//    - Ausgabe auf Volljährigkeit und Alkohol-Erlaubnis
//    - Hochzählen bis volljährig
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	int age;

	cout << "Alter eingeben: ";

	cin >> age;

	if (age >= 18) {
		cout << endl << "Du bist volljaehrig!" << endl << endl;
	}
	else if (age < 12) {
		cout << endl << "Du bist noch recht jung!" << endl << endl;
	}
	else {
		cout << endl << "Du bist nicht volljaehrig!" << endl << endl;
	}


	if (age < 16) {
		cout << "Du darfst noch keinen Alkohol trinken!" << endl << endl;
	}
	else if (age >= 16 && age < 18) {
		cout << "Du darfst Bier aber noch keine Spirituosen trinken!" << endl << endl;
	}
	else {
		cout << "Du darfst Alkohol trinken!" << endl << endl;
	}

	if (age < 20) {

		while (age <= 20) {
			cout << "Du bist jetzt " << age << " Jahre alt!" << endl;
			age++;
		}

		cout << endl << "Du bist jetzt volljaehrig!" << endl << endl;
		cout << "Du darfst jetzt Alkohol trinken!" << endl << endl;
	}

	cout << "Dieser Block wird immer ausgefuehrt!" << endl << endl;

	system("pause");

	return 0;
}