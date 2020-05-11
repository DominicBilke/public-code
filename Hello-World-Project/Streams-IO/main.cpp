//
//  main.cpp
//  Streams
//
//  Created by Dominic Bilke on 08.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
//  Ein- Ausgabe mit Streams
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {

	// cout schreiben
	cout << "\"\\Hello\\ World!\"" << endl << endl;

	// output.txt schreiben
	ofstream ofile("output.txt");
	if (ofile.is_open()) {
		ofile << "Hallo Welt!\nTest" << endl;
		ofile.close();
	}

	// output.txt auslesen
	string str = "";
	string s = "";
	ifstream ifile("output.txt");
	if (ifile.is_open()) {
		while (!ifile.eof()) {
			getline(ifile, s);
			str.append(s+"\n");
		}
		ifile.close();
	}

	cout << "In der Datei output.txt steht: " << endl << str << endl;


	// Anzahl Wörter aus faust.txt lesen
	int words = 0;
	ifstream ifile2("faust.txt");
	if (ifile2.is_open()) {
		while (!ifile2.eof()) {
			ifile2 >> str;
			words++;
		}
		ifile2.close();
	}

	// Anzahl Zeilen aus faust.txt lesen
	int lines = 0;
	ifstream ifile3("faust.txt");
	if (ifile3.is_open()) {
		while (!ifile3.eof()) {
			getline(ifile3, s);
			lines++;
		}
		ifile3.close();
	}

	cout <<  endl
		<< "In der Datei faust.txt sind " 
		<< words 
		<< " Wörter und " 
		<< lines 
		<< " Zeilen vorhanden."
		<< endl << endl;

	system("pause");

	return 0;
}