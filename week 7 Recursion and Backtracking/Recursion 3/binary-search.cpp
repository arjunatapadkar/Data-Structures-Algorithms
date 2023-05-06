

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& target){
    // base case
    if(s > e) return -1;

    int mid = (s + e)/2;
    // first condition
    if(arr[mid] == target) return mid;

    if(arr[mid] < target) {
        return binarySearch(arr, mid + 1, e, target);
    }
    else{
        return binarySearch(arr, s, mid - 1, target);
    }
}

int main(){

    vector<int> arr = {1, 2, 3, 4,5, 6, 7, 8 ,9};
    int n = arr.size();
    int s = 0, e = n-1;
    int target = 6;

    int ans = binarySearch(arr, s, e, target);


    cout << "Element present at position "  << ans << endl;


    return 0;
}