#include <iostream>
#include <vector>
using namespace std;

void printing(vector<int> v)
{
    cout << "size  " << v.size() << endl;
    // v.size()--> O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter size of big vector" << endl;
    cin >> N;
    vector<vector<int>> v;

    for (int i = 0; i < N; i++)
    {

        int n;
        cout << "size of each small vector" << endl;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter element" << j + 1 << endl;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        printing(v[i]);
    }
}
