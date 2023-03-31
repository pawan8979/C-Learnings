#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;
    cout << "enter number of key elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string k;
        cout << "enter the element" << i + 1 << endl;
        cin >> k;
        m[k] = m[k] + 1;
    }

    for (auto pr : m)
    {
        cout << pr.first << "-> " << pr.second << endl;
    }
}