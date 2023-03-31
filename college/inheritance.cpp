#include <iostream>
using namespace std;

class parent
{

public:
    int height = 10;

public:
    string surname = "Pandey";

public:
    int skill()
    {
        cout << "Reading";
    }
};

class child1 : public parent
{
public:
    string name = "Ayush";
    int sleep()
    {
        cout << "sleep master";
    }
};

class child2 : protected parent
{
public:
    string name = "Ayush";
    int sleep()
    {
        cout << "sleep master";
    }

    int getheight()
    {
        return this->height;
    }
};

class child3 : private parent
{
public:
    string name = "Ayush";
    int sleep()
    {
        cout << "sleep master";
    }

    int getheight()
    {
        return this->height;
    }
};

int main()
{
    child1 obj1;
    obj1.sleep();
    cout << endl;
    obj1.skill();
    cout << endl;
    cout << obj1.parent::surname << endl;

    child2 obj2;
    cout << endl;
    cout << obj2.getheight();

    child3 obj3;
    cout << endl;
    cout << obj3.getheight();
}