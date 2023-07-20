

#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){

    // calculating mid
    int mid = (s+e)/2;

    // deriving lengths of the left and right array
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating two dynamic arrays
    int* left = new int[len1];
    int* right = new int[len2];

    // copying values in left and right arrays
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k++];
    }

    k = mid + 1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k++];
    }



    // merge two arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex]  < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++]; 
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // merging remaining values from both the arrays
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }


    // delete the dynamically allocated arrays
    delete[] left;
    delete[] right;

}

void mergeSort(int * arr, int s, int e){

    // two base cases
    // start is greater than end index s >= e
    // only one element in an array
    if(s >= e) return;

    int mid = (s + e)/2;

    // sort left array
    mergeSort(arr, s, mid);

    // sort right array
    mergeSort(arr, mid+1, e);


    // merge the two sorted arrays
    merge(arr, s, e);
}

int main(){

    int arr[] = {3, 53, 23, 67, 4, 4, 4, 4, 4, 4, 4, 1, 64, 22, 46};
    int n = 15;


    // start and end index of array
    int s = 0;
    int e = n - 1;

    // merge - sort function call

    mergeSort(arr, s, e);

    // printing sorted array
    for(int i=0; i<n; i++){

        cout << arr[i] << " " ;

    }

    cout << endl;


    return 0;
}