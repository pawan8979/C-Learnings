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
    cout << "Enter size of array" << endl;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {

        int n;
        cout << "size of each vector" << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter element" << j + 1 << endl;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printing(v[i]);
    }
}
