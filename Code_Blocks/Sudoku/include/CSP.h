#ifndef CSP_H
#define CSP_H

#include <list>
#include <map>
#include <array>

#include "Constraint.h"

using namespace std;


template<class K, class V>
class CSP
{
public:
    CSP(list<K> variables, map<K, list<V>> domains, Constraint<K,V>* constraint);
    map<K,V> solve();

protected:

private:
    list<K> variables;
    map<K, list<V>> domains;
    Constraint<K,V>* constraint;
    map<K,V> solve(map<K,V> assignment);
};

#endif // CSP_H
