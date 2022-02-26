#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Sudoku.h"

using namespace std;

int main(int argc, char *argv[])
{

    Sudoku* sudoku = new Sudoku();
    return sudoku->main(argc, argv);
}
