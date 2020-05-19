//
//  main.cpp
//  objects
//
//  Created by Dominic Bilke on 08.05.20.
//  Copyright © 2020 Dominic Bilke. All rights reserved.
//
//  Arbeit mit Objekten in CPP
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car
{
private:
    string brand;
    int ps;
public:
    Car(string br, int p) {
        brand = br;
        ps = p;
        cout << "Ein neues Auto wurde restellt." << endl;;
    }

    string getBrand() {
        return brand;
    }

    int getPS() {
        return ps;
    }

    void tune(int p) {
        ps = p;
    }

    void printCar() {
        cout << "Marke " << brand << " mit " << ps << " PS." << endl;;
    }
};


int main(int argc, const char* argv[]) {

    Car c("BMW", 330);
    c.printCar();

    cout << endl;

    Car c2("Mercedes", 330);
    c2.printCar();

    cout << endl;

    system("pause");

    return 0;
}
