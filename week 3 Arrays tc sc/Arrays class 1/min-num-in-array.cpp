

#include <iostream>
#include <limits.h>
using namespace std;

int min(int arr[], int size)
{
    int mn = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 0, 123, 12, 3, 5};
    int size = 14;
    cout << min(arr, size);

    return 0;
}