
#include<iostream>
#include<vector>
using namespace std;

bool check_sorted(vector<int>& arr, int& n, int& i){

    // base case
    if(i == n-1) return true;

    // handle 1 case
    if(arr[i+1] < arr[i]) return false;
    i++;
    return check_sorted(arr, n, i);
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 15, 6,7, 8,9};

    int n = arr.size();

    int i = 0;

    if(check_sorted(arr, n, i)){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not sorted" << endl;
    }

    return 0;
}