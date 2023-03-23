

#include <iostream>
#include <limits.h>
using namespace std;

int max(int arr[], int size)
{
    int mx = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 0, 123, 12, 3, 5};
    int size = 14;
    cout << max(arr, size);

    return 0;
}