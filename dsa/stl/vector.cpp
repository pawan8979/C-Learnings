#include <iostream>
#include <vector>
using namespace std;

void printing(vector<int> &v)
{
    cout << "size  " << v.size() << endl;
    // v.size()--> O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
    v.push_back(2);
}

int main()
{
    vector<int> v;
    int size;
    cout << "enter size" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int x;
        cout << "Enter element " << i + 1 << endl;
        cin >> x;
        v.push_back(x); // O(1)
    }

    vector<int> v1 = v; // O(n)--> because it copies value one by one till n
    v1.push_back(1);
    printing(v);
    printing(v);
    printing(v1);
    printing(v1);
}