#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {2, 9, 3, 7, 1};
    sort(a, a + 5); // sort the array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    //  find min max array
    int min = *min_element(a, a + 5); // returns pointer
    int max = *max_element(a, a + 5);
    cout << "Minimum element  " << min << endl
         << "Maximum element  " << max << endl;

    // find accumulate(sum) of array
    cout << "Sum of array  " << accumulate(a, a + 5, 0);
}

// lower bound--> find the element or greather than element--> if niether is present then it gives the next element pointer that does not exist i.e a+5 garbage
// upper bound--> even if element is present then it finds the next greater element---> If niether then a+5 garbage