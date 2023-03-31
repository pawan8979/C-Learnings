#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s = "PAWAN";
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}