

// reverse the array 
// 1, 2, 3, 4, 5, 6, 7, 8, 9
// 9, 8, 7, 6, 5, 4, 3, 2, 1


#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    // printing array
    for(auto i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;
}

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start < end)
    {    
        swap(arr[start++], arr[end--]);
    }
    
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    printArray(arr, size);
    reverse(arr, size);
     printArray(arr, size);
    return 0;
}