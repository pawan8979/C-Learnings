#include <iostream>
using namespace std;

bool rev(int i, string p)
{
    int n = p.length();
    if (i >= n - 1)
    {
        return false;
    }

    if (p[i] == p[n - i - 1])
    {
        rev(++i, p);
    }
    else
        return false;
}
int main()
{

    string s = "naane";
    int i = 0;
    bool check = rev(i, s);
    if (check)
        cout << " pallind" << endl;
    else
        cout << " not Pall" << endl;
    return 0;
}