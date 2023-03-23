

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bin_search(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;

    }
    return -1;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 90;

    int ans = bin_search(arr, target);

    if(ans == -1){
        cout << "Target not found" << endl;
    }
    else{
        cout << "Target found at " << ans << endl;
    }

    // using stl function
    bool flag = binary_search(arr.begin(), arr.end(), 5);
    if(flag){
        cout << "element found" << endl;
    }
    else{
        cout << "element not found" << endl;
    }

    return 0;
}