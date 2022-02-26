#include "CSP.h"

template<class K, class V>
CSP<K,V>::CSP(list<K> variables, map<K, list<V>> domains, Constraint<K,V>* constraint)
{
    //ctor
    this.variables = variables;
    this.domains = domains;
    this.constraint = constraint;
}


template<class K, class V>
map<K,V> CSP<K,V>::solve()
{
    map<K,V> m;
    return solve(m);
}

template<class K, class V>
map<K,V> CSP<K,V>::solve(map<K,V> assignment)
{
    if(assignment.size() == this.variables.size())
    {
        return assignment;
    }
    list<K> unassigned;
    for (K key:variables)
    {
        if(!assignment.count(key))
            unassigned.push_back(key);
    }
    auto l_front = unassigned.begin();
    advance(l_front, 0);
    K testVariable = *l_front;

    for(V value:this.domains[testVariable])
    {
        map<K,V> testAssignment;
        testAssignment.emplace(testVariable, value);
        if (constraint->check(testAssignment))
        {
            map<K,V> result = solve(testAssignment);
            if (result)
            {
                return result;
            }
        }
    }

}

