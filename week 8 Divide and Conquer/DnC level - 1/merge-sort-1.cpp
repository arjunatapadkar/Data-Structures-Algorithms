

#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    // copy the elements in left array
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k++];
    } 

    // copy the elements in right array
    k = mid + 1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k++];
    }

    int i=0, j=0;
    k = s;
    while(i < len1 && j < len2){

        if(left[i] < right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }

    }

    // remaining elements from left array
    while(i < len1){
        arr[k++] = left[i++];
    }

    // remaining elements from right array
    while(j < len2){
        arr[k++] = right[j++];
    }

    delete left;
    delete right;

}

void mergeSort(int* arr, int s, int e){


    // Base Case -> 1. s==e    2. s>e
    if(s >= e) return;

    int mid = s+ (e-s)/2;

    // left sort
    mergeSort(arr, s, mid);

    // right sort
    mergeSort(arr, mid+1, e);


    // merge the two sorted arrays
    merge(arr, s, e);

}


int main(){


    int arr[]  = {2, 4, 6, 8, 8, 8, 8, 8, 8, 8, 23, 53, 1, 5, 7};

    int n =15;
    int s = 0, e = n-1;

    mergeSort(arr, s, e);

    for(int i=0; i<n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}