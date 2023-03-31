#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<string> s;
    s.insert("Pawan"); // O(1)
    s.insert("Advay");
    s.insert("Anvay");
    s.insert("Advay");
    auto it = s.find("Advay"); // This is case sensitive
    if (it != s.end())
    {
        s.erase(it); // only 1 value will be deleted that point to the iterator
    }
    cout << "Output of erase with iterator" << endl;
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Output of erase with value" << endl;
    s.erase("Advay"); // all matching value will be deleted
    for (auto it : s)
    {
        cout << it << " ";
    }
}