//
//  main.cpp
//
//  Created by Dominic Bilke on 09.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
// Ausgabe der Jahre zwischen 2010 und 2022, die KEINE Schaltjahre sind.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	cout << endl << "Ausgabe der Jahre zwischen 2010 und 2022, die KEINE Schaltjahre sind:" << endl << endl;

	for (int s = 2010; s <= 2022; s++) {

		if (s == 2012 || s == 2016 || s == 2020)
			continue;

		cout << "Das Jahr " << s << " ist KEIN Schaltjahr." << endl;
	}

	system("pause");

	return 0;
}