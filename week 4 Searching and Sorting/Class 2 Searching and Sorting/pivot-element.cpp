

#include<bits/stdc++.h>
using namespace std;

int pivot_number(vector<int> v){

    int start = 0;
    int end = v.size()-1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(v[mid] > v[mid+1] && mid + 1 < v.size()){

        cout << "entered 1\n";
            return mid;
        }

        if(v[mid] < v[mid-1] && mid-1 >=0){

        cout << "entered 2\n";
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

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    // in this test case the mid+1 will be greater than the size of array therefore mid+1 should be less than size
    vector<int> arr2 = {1, 4, 5};

    vector<int> arr3 = {5, 3, 4};

    vector<int> arr4 = {7, 8, 9, 10, 2, 3, 5, 6};


    
    cout << "Pivot number is " << pivot_number(arr) << endl;
    cout << "Pivot number is " << pivot_number(arr2) << endl;
    cout << "Pivot number is " << pivot_number(arr3) << endl;
    cout << "Pivot number is " << pivot_number(arr4) << endl;


   return 0;
}