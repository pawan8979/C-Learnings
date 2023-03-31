#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s;
    // set<int> val = {6, 10, 5, 1}; // defining a set with values
    s.insert("Pawan"); // log(n)
    s.insert("Advay");
    s.insert("Anvay");
    s.insert("Aradhya");
    // if present iterator if not present then s.end()
    auto it = s.find("Aradhya");
    // doubt is why below it is not taking the value of above it--> I think auto it means the default defination of it that is equal to s.begin()

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
    set<int> val = {6, 10, 5, 1};
    for (auto it = val.find(6); it != val.end(); it++)
    {
        cout << *it << " ";
    }
}