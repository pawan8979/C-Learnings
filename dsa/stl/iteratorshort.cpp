#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5};
    vector<pair<int, int>> vp = {{7, 8}, {8, 9}, {9, 10}};

    for (int value : v)
    {
        cout << value << " "; // value is a copy of elements of v and not real value so changes wont propagate
    }
    cout << endl;
    for (int &value : v)
    {
        value++;
        cout << value << " "; // value is a actual value of elements so changes will propagate
    }
    cout << endl;

    for (pair<int, int> value : vp)
    {
        cout << value.first << "  " << value.second << endl;
    }
}