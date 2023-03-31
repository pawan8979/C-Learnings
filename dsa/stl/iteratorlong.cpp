#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5};
    vector<int>::iterator it = v.begin();

    vector<pair<int, int>> vp = {{7, 8}, {8, 9}, {9, 10}};
    vector<pair<int, int>>::iterator itp = vp.begin();

    // it++ move control to next iterator while it+1 move to next location. This is fine for vector but not set and map because they are not in continuous location.

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    for (itp = vp.begin(); itp != vp.end(); itp++)
    {
        cout << (*itp).first << "  " << itp->second << endl; // two ways to point in case of pair
    }
}

/* Instead of using this vector<int>::iterator it = v.begin();
we can make use of auto in for loop like
for (auto it = v.begin(); it != v.end(); it++)
*/