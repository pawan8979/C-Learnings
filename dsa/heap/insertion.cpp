#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    void insert(int val){
        size=size+1;
        int index=size-1;
        arr[index]=val;
        while(index!=0)
        {
            int par= (index-1)/2;
            if(arr[par]<arr[index])
            {
                swap(arr[par], arr[index]);
                index=par;
            }
            else return;
        }
    }

    void deleteheap()
    {
        if(size==0)
            cout<<"Nothing to delete";
        arr[0]=arr[size-1];
        size=size-1;
        int index=0;
        while(index<=size)
        {
            int left= 2*index+1;
            int right=2*index+2;
            if(left<size-1 && arr[index]<arr[left])
            {
                swap(arr[index],arr[left]);
                index=left;
            }
            else if (right<size-1 && arr[index]<arr[right])
            {
                swap(arr[index],arr[left]);
                index=right;
            }
            else return;

        }

    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout<<endl;
    h.deleteheap();
    h.print();
    return 1;
}













