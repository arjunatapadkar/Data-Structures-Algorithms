

#include<iostream>
using namespace std;

int count_inversion(int* arr, int n){

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            if(arr[i] > arr[j]){
                count++;
            }
        }
    }


    return count;
}

int main(){

    int arr[4] = {8, 4, 2, 1};

    cout <<  count_inversion(arr, 4) << endl;


    return 0;
}