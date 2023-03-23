


#include<iostream>
#include<vector>
using namespace std;


int peak_element(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;


    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid; 
        }
        mid = start + (end -start)/2;
    }
    return arr[mid];
}

int main(){

    vector<int> arr = {1, 3, 5, 10, 9, 7, 4};

    cout << "peak = " << peak_element(arr) << endl;

    return 0;
}