


// This code is implementation for binary search for calculating ceil index. The ceil index is the index of the smallest element in the array that is greater than or equal to a given target value.




#include<iostream>
using namespace std;


int ceilIndex(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else 
            ceil = mid;
            right = mid - 1;
    }

    return ceil;
}


int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = ceilIndex(arr,  n, x);
        
    cout << "ceil index " << result << endl;

    return 0;
}




