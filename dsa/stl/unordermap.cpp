#include <iostream>
#include <unordered_map>
using namespace std;

// void printing(unordered_map<int, string> m)
// {
//     cout << "size  " << m.size() << endl;
//     for (int it = m.begin(); it != m.end(); it++)
//     {
//         cout < < it->first < < "  " << it->second << endl;
//     }
// }

int main()
{
    unordered_map<int, string> m;
    m[1] = "pawan";
    m.insert({5, "adhvay"});
    m[2] = "aradhya";
    unordered_map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << "  " << (*it).second << endl;
    }
}

/*

Difference in unordered map from ordered map
1. Inbuilt Impementation: It uses hashed function(hash value is calculated for every key) while ordered uses trees for inbuilt implementation
2. Time complexity: O(1) for insertion and accessing
3. Valid keys datatype: we cannot insert complex data type but we can in ordered map
Ex- unordered_map<pair<int,int>, string> m;

*/