
#include<iostream>
#include<vector>
using namespace std;

int bin_search(vector<int> arr, int start, int end, int x){

    while(start <= end){

        int mid = (start + end)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x) {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int exponential_search(vector<int> arr, int x){
    if(arr[0]==x) return 0;
    int n = arr.size();
    int i=0;
    int j = 1;
    while(j<n && arr[j] <= x){

        i = j;
        j = j * 2;
    }

    return bin_search(arr, i, min(j, n), x);

}

int main(){

    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int x = 70;

    int ans = exponential_search(arr, x);

    cout << ans << endl;


    return 0;
}