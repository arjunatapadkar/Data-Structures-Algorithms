

// count zeros and ones in array
// arr = {0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0};
// zero - 5 ones - 6


#include<iostream>
using namespace std;

void count(int arr[], int size){
    int zeros = 0;
    int ones = 0;
    for(auto i=0; i<size; i++){
        if(arr[i])
            ones++;
        else
            zeros++;
    }
    cout << "zeros - " << zeros << "  ones - " << ones << endl; 
}

int main(){

    int arr[] = {0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0};
    int size = 11;

    count(arr, size);

    return 0;
}