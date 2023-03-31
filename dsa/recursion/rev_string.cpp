#include <iostream>
using namespace std;

rev(int i, int j, string &s)
{
    if (i > j)
    {
        return 0;
    }
    swap(s[i], s[j]);
    rev(++i, --j, s);
}
int main()
{

    string s = "pawan";
    int i = 0;
    int j = s.length() - 1;
    rev(i, j, s);
    cout << s << endl;
    return 0;
}