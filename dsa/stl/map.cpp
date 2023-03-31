#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "pawan";
    m.insert({5, "adhvay"});
    m[2] = "aradhya";
    m[5] = "anaya"; // map stores sorted unique value and hence will replace the old value with new
    m[7];           // O(log(n)) and if value is string type then it stores empty string and if int then 0

    // m["abcd"]= "abcd";  If we use string as a key then the complexity will be s.size()*log(n)

    /*    LONGCUT WAY

    when we declare iterator we use *it.first and it->second
        map<int, string>::iterator it;

        for (it = m.begin(); it != m.end(); it++)
        {
            cout << (*it).first << "  " << it->second << endl;
        }
    */

    /* SHORTCUT WAY

    when we do not declare iterator we use value.first and value.second
    &value stroes the original elements of the map
        for (auto &value : m)
        {
            cout << value.first << "  " << value.second << endl;
        }
    */

    /* functionality of find function

    Note: If found then it returns the iterator and if not found then it returns m.end() that is the value after the last value(doesn't exist)

        auto it = m.find(3); // O(log(n))
        if (it == m.end())
            cout << "No value";
        else
            cout << (*it).first<< "  "<< it->second<<endl;
    */

    /* erase function

    Note: We cannot insert value that doesnt exist in erase fucntion as it will give error. for ex-> m.end()

    m.erase(5); //We can insert either key or iterator
    if(it!=m.end) //For safety
    {
        m.erase(it);
    }
    */
}