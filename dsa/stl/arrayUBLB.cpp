#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {2, 9, 3, 7, 1};
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    int *pl = lower_bound(a, a + 5, 4); // log n
    int *pu = upper_bound(a, a + 5, 10);
    cout << "Priting the lower bound  " << *pl << endl
         << "Printing the upper bound  " << *pu << endl;

    int min = *min_element(a, a + 5);
    int max = *max_element(a, a + 5);
    cout << "Minimum element  " << min << endl
         << "Maximum element  " << max;
}

// lower bound--> find the element or greather than element--> if niether is present then it gives the next element pointer that does not exist i.e a+5 garbage
// upper bound--> even if element is present then it finds the next greater element---> If niether then a+5 garbage