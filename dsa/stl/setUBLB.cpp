#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(0);
    s.insert(7);
    s.insert(4);
    s.insert(1);

    for (auto value : s)
    {
        cout << value << endl;
    }
    // auto itl = lower_bound(v.begin(), v.end(), 4); // O(n) --> That is why we can't use this line
    auto itl = s.lower_bound(4); // log n
    auto itu = s.upper_bound(10);
    cout << "Priting the lower bound  " << *itl << endl
         << "Printing the upper bound  " << *itu;
}

// lower bound--> find the element or greather than element--> if niether is present then it gives the next element pointer that does not exist i.e v.end() garbage
// upper bound--> even if element is present then it finds the next greater element---> If niether then v.end() garbage