#include <iostream>
using namespace std;

int rev(int i, string &s)
{
    int n = s.length();
    if (i >= n - 1)
    {
        return 0;
    }

    swap(s[i], s[n - i - 1]);
    rev(++i, s);
}
int main()
{

    string s = "pawan";
    int i = 0;
    rev(i, s);
    cout << s << endl;
    return 0;
}