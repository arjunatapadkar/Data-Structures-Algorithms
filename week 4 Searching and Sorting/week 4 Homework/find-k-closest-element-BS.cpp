
// Binary Search Method

#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> arr, int x){

    int s= 0, e = arr.size() - 1;
    int ans = e;  // ----> x > a[e] then ans should be e
    while(s<=e){

        int mid = (s+ e)/2;

        if(arr[mid] > x ){
            ans = mid;
            e = mid - 1;
        }
        else {
             s = mid  + 1;
        }
    }
    return ans;

}

vector<int> findClosest(vector<int> arr, int k, int x){
    
    int h = lowerBound(arr, x);
    int l = h -1;

    while(k--){
        if(l < 0 ){
            h++;
        }
        else if(h >= arr.size()){
            l--;
        }
        else if(x - arr[l] > arr[h] - x){
            h++;
        }
        else{
            l--;
        }
    
    }

    return vector<int>(arr.begin() + l + 1, arr.begin()  + h);
}

int main(){

    vector<int > arr = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    int k = 4;
    int x = 35;

    vector<int> ans = findClosest(arr, k, x);

    for(auto it : ans){
        cout << it << " ";
    }

    return 0;


    return 0;
}