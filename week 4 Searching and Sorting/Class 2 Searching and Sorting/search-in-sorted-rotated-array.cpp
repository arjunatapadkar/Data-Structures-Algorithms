



#include<bits/stdc++.h>
using namespace std;

int bin_search(vector<int> arr,  int start, int end, int target){

    // int start = 0;
    // int end = arr.size() -1;
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


int pivot_number(vector<int> v){

    int start = 0;
    int end = v.size()-1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(v[mid] > v[mid+1] && mid + 1 < v.size()){

     
            return mid;
        }

        if(v[mid] < v[mid-1] && mid-1 >=0){

      
            return mid - 1;
        }
            

        if(v[mid] < v[start])
            end = mid - 1;
        else
            start = mid + 1;


        mid = start + (end - start)/2;
    }
    return mid;
}

int main(){

    vector<int> arr = {5, 6, 7, 8, 1, 2, 3, 4 };
    int target = 41;

    int piv_ind = pivot_number(arr);
    if(target >= arr[0] && target <= arr[piv_ind]){
       cout << "target element index : " << bin_search(arr, 0, piv_ind, target) << endl;
    }
    else{
       cout << "target element index : " << bin_search(arr, piv_ind, arr.size()-1 , target) << endl;
    }
  

   return 0;
}