#ifndef CONSTRAINT_H
#define CONSTRAINT_H

#include <map>

using namespace std;

template<class K, class V>
class Constraint
{
public:
    virtual bool check(map<K,V> assignment) = 0;
};

#endif // CONSTRAINT_H
