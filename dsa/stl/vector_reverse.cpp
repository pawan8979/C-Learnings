#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &v, int m)
{
    int s = m + 1;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int m;
    cout << "After which position you want to reverse" << endl;
    cin >> m;
    reverse(v, m);
    cout << "New updated vector:" << endl;
    for (auto value : v)
    {
        cout << value << endl;
    }
}