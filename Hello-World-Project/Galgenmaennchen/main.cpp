//
//  main.cpp
//  Galgenmaennchen
//
//  Copyright © 2017 Jannis Seemann. All rights reserved.
//
//  Programm zum Galgenmaennchen-Spiel
//

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, const char* argv[]) {

	string word = "Galgenmaennchen";

	string quest = "";
	char input;
	int v = 10;
	bool failed;

	// Unterstriche einfügen
	for (int i = 0; i < word.length(); i++) 
			quest += "_";

	// Schleife solange noch Versuche möglich unbd Wort noch nicht gefunden
	while (v>0 && (quest != word))	{

		// Eingabe und Ausgabe
		cout << endl << quest << " (Du hast noch " << v << " Versuche!)" << endl;

		cout << endl << "Bitte gebe einen Buchstaben ein: ";
		cin >> input;

		failed = true;
		for(int pos = 0; pos < word.length(); pos++) {
			// Position festlegen
			if (word[pos] == toupper(input) || word[pos] == tolower(input)) {
				quest[pos] = word[pos];
				failed = false;
			}
		}
		// Versuch gescheitert
		if (failed)	v--;
	}

	// Ende des Spiels
	if (quest == word)
	{
		cout << endl << endl << "Du warst erfolgreich und hast das Wort gefunden!" << endl;
		cout << endl << "Das Wort heisst: " << word << endl << endl;
	}
	else
		cout << endl << endl << "Du warst nicht erfolgreich und hast das Wort nicht gefunden!" << endl << endl;


	system("pause");

	return 0;
}