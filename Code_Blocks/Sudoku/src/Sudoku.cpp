#include "Sudoku.h"

Sudoku::Sudoku()
{
    //ctor
}

Sudoku::~Sudoku()
{
    //dtor
}

bool Sudoku::check(map<pair<int,int>,int> assignment)
{
    for(int row=0; row < 9; row++)
    {
        list<int> data;
        for(int column = 0; column < 9; column++)
        {
            pair<int, int> location(row, column);
            if (assignment.count(location))
            {
                int value = assignment[location];
                auto it = find(data.begin(), data.end(), value);
                if (it != data.end())
                {
                    return false;
                }
                data.push_back(value);
            }
        }
    }

    for ( int column = 0; column < 9; column++)
    {
        list<int> data;
        for(int row = 0; row < 9; row++)
        {
            pair<int, int> location (row, column);
            if (assignment.count(location))
            {
                int value = assignment[location];
                auto it = find(data.begin(), data.end(), value);
                if (it != data.end())
                {
                    return false;
                }
                data.push_back(value);
            }
        }
    }

    for (int startRow = 0; startRow < 9; startRow += 3)
    {
        list<int> data;
        for(int row = startRow; row < startRow + 3; row++)
        {
            for(int startColumn = 0; startColumn < 9; startColumn += 3)
            {
                list<int> data;
                for(int column = startColumn; column< startColumn + 3; column++)
                {
                    pair<int, int> location (row, column);
                    if (assignment.count(location))
                    {
                        int value = assignment[location];
                        auto it = find(data.begin(), data.end(), value);
                        if (it != data.end())
                        {
                            return false;
                        }
                        data.push_back(value);
                    }
                }
            }
        }
    }
    return true;
}

void Sudoku::printSudoku(map<pair<int,int>,int> assignment)
{
    for(int row = 0; row < 9; row++)
    {
        cout << "+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "|" << endl;
        for(int column = 0; column < 9; column++)
        {
            pair<int, int> location (row, column);
            if (assignment.count(location))
            {
                cout << assignment[location];
            }
            else
            {
                cout << " ";
            }
            cout << "|";
        }
        cout << endl;
    }
    cout << "+-+-+-+-+-+-+-+-+-+" << endl;
}

map<pair<int,int>,int> Sudoku::parseDefinition(Sudoku* sudoku, string filename)
{
    map<pair<int,int>,int> predefinition;
    list<string> lines;
    ifstream input(filename);

    if (!input)
    {
        cerr << "Datei beim Oeffnen der Datei " << filename << "\n";
        return predefinition;
    }

    string line;

    while (getline(input, line))
    {
        lines.push_back(line);
    }

    if (lines.size() > 0)
    {
        int maxLine = 8;
        if(lines.size() < maxLine + 1)
        {
            maxLine = lines.size() - 1;
        }
        for(int i = 0; i <= maxLine; i++)
        {
            auto l_front = lines.begin();
            advance(l_front, i);
            string line =  *l_front;

            int maxChar = 8;
            if(line.length() < maxChar + 1)
            {
                maxChar = line.length() -1;
            }
            for (int j = 0; j <= maxChar; j++)
            {
                char current = line.at(j);
                auto it = find(NUMBERS.begin(), NUMBERS.end(), current);
                if (it != NUMBERS.end())
                {
                    predefinition.emplace(make_pair(make_pair(i,j), current - '0'));
                }
            }

        }
        if(!sudoku->check(predefinition))
        {
            cout << "Konflikt in der Vorbelegung." << endl;
            exit(0);
        }

    }
    return predefinition;
}

int Sudoku::main(int argc, char *argv[])
{

    list<pair<int, int>> variables;

    map<pair<int, int>, list<int>> domains;
    map<pair<int, int>, int> predefinition;

    Sudoku* constraint = new Sudoku();

    if(argc > 0)
    {
        predefinition = constraint->parseDefinition(constraint, argv[1]);
    }

    for (int row = 0; row < 9; row ++)
    {
        for(int column = 0; column < 9; column++)
        {
            pair<int, int> location (row, column);
            variables.push_back(location);
            if(predefinition.count(location))
            {
                domains.emplace(location, predefinition[location]);
            }
            else
            {
                list<int> l = {1,2,3,4,5,6,7,8,9};
                domains.emplace(location, l);
            }
        }
    }
    CSP<pair<int,int>, int> sudokuCSP (variables, domains, constraint);
    map<pair<int, int>, int> solution = sudokuCSP.solve();
    if (!solution.empty())
    {
        constraint->printSudoku(solution);
    }
    return 0;
}
