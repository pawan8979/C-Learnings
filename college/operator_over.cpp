// #include <iostream>
// using namespace std;

// class overload
// {
// public:
//     int a;

// public:
//     void operator+(overload &obj)
//     {
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout << "Difference is " << value2 - value1;
//     }
// };

// int main()
// {
//     overload obj1;
//     overload obj2;

//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
// }

#include <iostream>
using namespace std;

class overload
{

public:
    void operator+(overload &obj)
    {

        cout << "Difference";
    }
};

int main()
{
    overload obj1;
    overload obj2;
    obj1 + obj2;
}