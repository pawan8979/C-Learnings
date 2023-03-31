#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
    v.push_back(2);
    v.push_back(0);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }

    auto itl = lower_bound(v.begin(), v.end(), 4); // log n
    auto itu = upper_bound(v.begin(), v.end(), 10);
    cout << "Priting the lower bound  " << *itl << endl
         << "Printing the upper bound  " << *itu;
}

// lower bound--> find the element or greather than element--> if niether is present then it gives the next element pointer that does not exist i.e v.end() garbage
// upper bound--> even if element is present then it finds the next greater element---> If niether then v.end() garbage