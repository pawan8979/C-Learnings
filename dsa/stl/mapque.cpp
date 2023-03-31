/*GIVEN N STRINGS, PRINT UNIQUE STRINGSA IN LEXIOGRAPHICAL ORDER WIRH THEIR FREQUENCY
N <= 10^5
|S| <=100
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cout << "Number of pairs" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "Enter the key" << i + 1 << endl;
        cin >> s;
        m[s]++;
    }

    for (auto pr : m)
    {
        cout << pr.first << "-> " << pr.second << endl;
    }
}