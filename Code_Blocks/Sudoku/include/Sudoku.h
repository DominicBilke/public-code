#ifndef SUDOKU_H
#define SUDOKU_H

#include <list>
#include <map>
#include <utility>
#include <string>
#include <fstream>
#include <array>
#include <iterator>
#include <algorithm>
#include <iostream>

#include "Constraint.h"
#include "CSP.h"

using namespace std;

class Sudoku: public Constraint<pair<int,int>, int>
{
public:
    Sudoku();
    virtual ~Sudoku();
    bool check(map<pair<int,int>,int> assignment);
    void printSudoku(map<pair<int,int>,int> assignment);
    map<pair<int,int>,int> parseDefinition(Sudoku* sudoku, string filename);
    int main(int argc, char *argv[]);
protected:

private:
    list<char> NUMBERS = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
};

#endif // SUDOKU_H
