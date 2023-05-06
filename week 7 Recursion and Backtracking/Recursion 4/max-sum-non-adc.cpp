

#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void solve(vector<int>& arr, int sum, int i, int& maxi){

    // base case
    if(i >= arr.size()){
        maxi = max(sum, maxi);
        return ;
    } 


    // include
    solve(arr, sum + arr[i], i+2, maxi );

    // exclude
    solve(arr, sum , i + 1, maxi );

}

int main(){

    vector<int> arr = {1,2, 34, 6 , 7, 3};

    int maxi = INT_MIN;
    int sum = 0;
    int i =0;
     solve(arr, sum, i, maxi);

    cout << maxi  << endl;
    return 0;
}