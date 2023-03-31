#include <iostream>
#include <vector>
using namespace std;

void printing(vector<pair<int, int>> v)
{
    cout << "size  " << v.size() << endl;
    // v.size()--> O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    // vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};  --->Initialization
    // Taking input from user
    vector<pair<int, int>> v;
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int x, y;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter pair" << i + 1 << endl;
        cin >> x >> y;
        v.push_back({x, y});
    }

    printing(v);
}
