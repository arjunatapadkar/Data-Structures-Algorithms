

#include<iostream>
#include<limits.h>
using namespace std;

void find_maxi(int arr[], int n, int i, int& mx){

    if(i>=n){
        return ;
    }

    mx = max(mx, arr[i]);

    find_maxi(arr, n, i+1, mx); 

}

int main(){

    int arr[] = {23,76, 32, 87, 3, 87,321 ,8,3, 8, 3, 1,58 ,14};

    int n = 14, i = 0;

    int mx = INT_MIN;

    find_maxi(arr, n, i, mx);

    cout << mx << endl;


    return 0;
}