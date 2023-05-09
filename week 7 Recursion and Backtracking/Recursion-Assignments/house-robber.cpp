

#include<iostream>
#include<vector> 
using namespace std;

int robHouseHelper(vector<int>& arr, int i){

    // base case 
    if(i >= arr.size()) return 0;

    // sol 1 case 
    int amt1 = arr[i] + robHouseHelper(arr, i+2);
    int amt2 = 0 + robHouseHelper(arr, i+1);

    return max(amt1, amt2);
}

int robHouse(vector<int>& arr){

    return robHouseHelper(arr, 0);

}

int main(){

    // vector<int>arr = {1, 2, 3,4, 5,6 , 7};
    vector<int>arr = {1, 2, 3,1};

    cout << robHouse(arr) << endl;


    return 0;
}