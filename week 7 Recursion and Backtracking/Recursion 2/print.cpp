

#include<iostream>
using namespace std;

void print(int arr[], int n ,int i){

    // base condition
    if(i>=n) return;

    // print
    cout << arr[i] << " ";

    // recursive call
    print(arr, n, i+1);

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int  i= 0;

    print(arr, n, i);


    return 0;
}