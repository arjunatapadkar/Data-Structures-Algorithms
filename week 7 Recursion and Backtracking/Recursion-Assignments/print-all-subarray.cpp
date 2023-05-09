#include<iostream>
#include<vector>
using namespace std;

void print_subarray_util(vector<int> & arr, int start, int end){

    // base case
    if(end == arr.size() ) return;
   

    // one case
    for(int i=start; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // recursive call
    print_subarray_util(arr, start, end+1);

}

void print_subarray(vector<int>& arr){
    for(int start = 0; start < arr.size(); start++){
        int end = start;
        print_subarray_util(arr, start, end);
    }
    return; 
}

int main(){

    vector<int> arr = {1, 2, 3, 4 ,5};

    print_subarray(arr);


    return 0;
}