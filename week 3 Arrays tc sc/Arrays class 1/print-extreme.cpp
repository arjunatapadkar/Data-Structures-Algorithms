

// 1, 2, 3, 4, 5, 6, 7,8 9

// 1, 9, 2, 8, 3, 7, 4, 6, 5

#include <iostream>
using namespace std;

void printExtreme(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start < end)
    { 
        
        cout << arr[start++] << " " << arr[end--] << " ";
    }
    if (size%2!=0)
        {
            cout << arr[start] << " ";
            
        }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    printExtreme(arr, size);
    return 0;
}