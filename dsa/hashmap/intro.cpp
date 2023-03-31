#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    unordered_map<string,int> m; 
    //insertion

    // 1way
    pair<string,int> p1= make_pair("pawan",3);
    m.insert(p1);

    //2way
    pair<string,int> p2("negi",2);
    m.insert(p2);

    //3way
    m["mera"]= 1;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("pawan")<<endl;

    // cout<<m.at("unknownkey")<<endl; //error ayega
    cout<<m["unknownkey"]<<endl; // 0 ayega

    cout<<m["unknownkey"]<<endl; // 0 ayega--- entry banjayei with value 0 is key ka
    cout<<m.at("unknownkey")<<endl; //0 ayega
    
    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("bro")<<endl; //output Absent 0 Present 1

    //erase
    m.erase("pawan");

    //printing
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string,int>:: iterator it= m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;
}