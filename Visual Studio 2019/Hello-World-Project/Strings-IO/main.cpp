//
//  main.cpp
//  HalloWelt
//
//  Bearbeiten von Strings
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
    string name = "Erik Mueller";

    // Ein einzelnes Zeichen austauschen
    name[0] = 'X';
    cout << name << endl;

    // Ans Ende was dranhaengen
    // name = name + "!!!";
    // name+="!!!";
    name.append("!!!");
    cout << name << endl;

    // Zeichen in die Mitte einfuegen
    name.insert(4, ",");
    cout << name << endl;

    // Zeichen entfernen
    string name2 = "Erik Mueller";
    name2.erase(4, 1);
    cout << name2 << endl;

    system("pause");

    return 0;
}
