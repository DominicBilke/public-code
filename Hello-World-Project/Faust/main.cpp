//
//  main.cpp
//  HalloWelt
//
//  Created by Jannis Seemann on 06.06.17.
//  Copyright © 2017 Jannis Seemann. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <utility>
#include <map>
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream fin("faust.txt");
    map<string, int> occurrences;
    
    while (!fin.eof()) {
        string word;
        fin >> word;
        
        if (occurrences.count(word) == 0) {
            occurrences.insert(pair<string, int>(word, 1));
        }
        else {
            occurrences[word]++;
        }
    }
    
    cout << occurrences.size() << endl;
    
    priority_queue<pair<int, string>> pq;
    
    for (const auto &entry : occurrences) {
        pair<int, string> pqEntry(entry.second, entry.first);
        pq.push(pqEntry);
    }
    
    for (int i = 0; i < 20; i++) {
        cout << pq.top().second << ": " << pq.top().first << endl;
        pq.pop();
    }
    
    fin.close();

}
