#include<iostream>
#include<unordered_map>
using namespace std;


int maxfreq(int arr[], int n)
{
    unordered_map<int,int> count;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
        maxi= max(maxi,count[arr[i]]);
    }
    for(int i=0;i<n;i++)
    {
        if(maxi==count[arr[i]])
        {
            return arr[i];
        }
    }
    return -1;
}


int main()
{
    int arr[5]={4,2,4,1,2};
    cout<<maxfreq(arr, 5);
    return 0;
}