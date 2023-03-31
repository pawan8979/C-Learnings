#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;
    s.insert("Pawan"); // O(1)
    s.insert("Advay");
    s.insert("Anvay");
    s.insert("Aradhya");
    // if present iterator if not present then s.end()
    auto it = s.find("Aradhya"); // O(1)

    for (auto it : s)
    {
        cout << it << "  ";
    }

    cout << endl;

    while (it != s.end())
    {
        cout << *it << "  ";
        it++;
    }

    cout << endl;
    unordered_set<int> val = {6, 10, 5, 1};
    for (auto it = val.find(6); it != val.end(); it++)
    {
        cout << *it << " ";
    }
}

// same diff like map and unordred map
// multiset allows us to store similar values (duplicates allowed)
