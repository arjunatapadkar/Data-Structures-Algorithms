



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int last_occerrence(vector<int> arr, int target){
    int start = 0;
    int end  = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid]==target){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target) {
            end = mid - 1;
        }
        else{
            start  = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 6 ,7, 8,9};
    int target = 4;
    cout << "last occerrence : " << last_occerrence(arr, target) << endl;

    // in-built function 
    // ans will store index+1 value
    auto ans = upper_bound(arr.begin(), arr.end(), 4);
    cout << "upper bound " << ans - arr.begin() << endl;
    return 0;
}