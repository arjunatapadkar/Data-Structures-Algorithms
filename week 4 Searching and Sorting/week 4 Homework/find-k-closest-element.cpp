
// Two pointer approach

#include<iostream>
#include<vector>
using namespace std;


vector<int> findClosest(vector<int> arr, int k,  int x){

    int low = 0, high = arr.size() - 1;

    while(high - low >= k){

        if(x - arr[low] > arr[high] - x){
            low++;   
        }
        else{
            high--;
        }

    }

    return vector<int> (arr.begin() + low, arr.begin() + high + 1);


}


int main(){


    vector<int > arr = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    int k = 8;
    int x = 35;

    vector<int> ans = findClosest(arr, k, x);

    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}