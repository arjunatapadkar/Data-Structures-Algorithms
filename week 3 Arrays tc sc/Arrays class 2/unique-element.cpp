

#include<iostream>
#include<vector>

using namespace std;

int findUnique(vector<int>arr){
    int ans = 0;
    for(auto i=0; i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements : " << endl;
    for(auto i=0 ; i<n; i++){
        cin >> arr[i];
    }

    cout << "unoque element in given array : " << findUnique(arr) << endl;

    return 0;
}