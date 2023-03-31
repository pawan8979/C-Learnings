#include <iostream>
using namespace std;

int main()
{
    int n = 23;
    int i = 2;
    int flag = 0;
    while (n / 2 >= i)
    {
        if (n % i == 0)
        {
            flag++;
        }
        i++;
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }
    else
        cout << "Not prime";
}
