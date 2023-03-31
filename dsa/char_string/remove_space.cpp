#include <iostream>
using namespace std;

void remove_space(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, "@48");
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);
    remove_space(s);
    cout << s;
}
