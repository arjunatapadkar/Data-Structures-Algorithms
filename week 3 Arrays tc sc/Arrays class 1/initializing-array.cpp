

#include<iostream>
using namespace std;

int main(){

    // remaining spaces holds zeros
    int arr[10] = {2, 4, 6, 8};
    for(auto i=0; i<10; i++)
        cout << arr[i] << " ";
    cout << endl;


    // gives garbage values
    int arr2[10] ;
    for(auto i=0; i<10; i++)
        cout << arr2[i] << " ";
    cout << endl;

    
    // initializing array with zero
    int arr3[10] = {0};
    for(auto i=0; i<10; i++)
        cout << arr3[i] << " ";
    cout << endl;






    
    return 0;
}