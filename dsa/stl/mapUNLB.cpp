#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    map<int, int> s;
    s.insert({1, 10});
    s[2] = 15;
    s[5] = 12;
    s[3] = 11;

    for (auto value : s)
    {
        cout << value.first << " " << value.second << endl;
    }
    // auto itl = lower_bound(v.begin(), v.end(), 4); // O(n) --> That is why we can't use this line
    auto itl = s.lower_bound(4); // log n
    auto itu = s.upper_bound(10);
    cout << "Priting the lower bound  " << itl->first << " " << itl->second << endl;
    cout << "Printing the upper bound  " << itu->first << " " << itu->second << endl;
}

// lower bound--> find the element or greather than element--> if niether is present then it gives the next element pointer that does not exist i.e v.end() garbage
// upper bound--> even if element is present then it finds the next greater element---> If niether then v.end() garbage