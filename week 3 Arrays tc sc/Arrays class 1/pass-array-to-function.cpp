
// array passing to the function is always work on pass by reference it passes the  base address of the array 

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    // printing array
    for(auto i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;
}


void increment(int arr[], int size){

    // changing array element
    arr[0] = arr[0] + 23;
    printArray(arr, size);
}


int main(){

    int arr[] = {5, 6};
    int size = 2;

    printArray(arr, size);
    increment(arr, size);
    printArray(arr, size);
    cout << sizeof(arr)/sizeof(int);

    return 0;
}