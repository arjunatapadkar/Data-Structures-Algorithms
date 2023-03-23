

// take 5 elements input in array and print their doubles

#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout << "Enter the array elements : " << endl;
    for(auto i=0; i<5; i++)
        cin >> arr[i];

    for(auto i=0; i<5; i++)
        cout << arr[i] * 2 << " ";



    return 0;
}