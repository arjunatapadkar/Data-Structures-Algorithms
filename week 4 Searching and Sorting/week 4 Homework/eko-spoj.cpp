
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){

    int sum = 0;

    for(int i=0; i<n; i++){

        if(mid  < arr[i]){
            sum = sum + (arr[i]- mid); 
        }

    }

    if(sum >= m){
        return true;
    }
    return false;

}

int solve(vector<int> arr, int n, int m){

    int start = 0;
    int end = 0;
    for(auto it : arr){if(it>end) end = it;};
    int ans = -1;
    while(start <= end){

        int mid = (start + end) >> 1;

        if(isPossible(arr, n, m ,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }




    return ans;
}


int main(){


    vector<int> arr = {20, 15, 10, 17};

    int n = 4;
    int m = 7;
    vector<int> arr2 = {4, 42, 40, 26, 46};

    int n1 = 5;
    int m1 = 20;

    int ans = solve(arr, n, m) ;
    int ans2 = solve(arr2, n1, m1) ;

    cout << ans << " " << ans2 ;

    return 0;
}