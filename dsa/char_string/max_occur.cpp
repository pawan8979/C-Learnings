#include <iostream>
using namespace std;

char getmax(string s)
{
    char a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int index;
        if (ch >= 'a' && ch <= 'z')
        {
            index = ch - 'a';
        }
        else
            index = ch - 'A';
        a[index]++;
    }
    int maxi = -1;
    int value = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < a[i])
        {
            value = i;
            maxi = a[i];
        }
    }
    return value + 'a';
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout << getmax(s);
}
