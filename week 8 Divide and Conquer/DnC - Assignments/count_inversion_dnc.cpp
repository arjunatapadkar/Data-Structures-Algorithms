
#include<iostream> 
#include<vector>
using namespace std;

long merge(vector<int>&arr, vector<int> &temp, int start, int mid, int end){

    int i= start, j = mid+1, k = start;
    long count = 0;
    while(i<=mid && j <= end){

        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            count += mid-start+1;
        }
    }

    // while(i <= mid){
    //     temp[k++] = arr[i++];
    // }
    // while(j <= end){
    //     temp[k++] = arr[j++];
    // }

    while(start <= end){
        arr[start] = temp[start];
        start++;
    }

    return count;
}

long mergeSort(vector<int>&arr, vector<int>&temp, int start, int end){
    if(start >= end){
        return 0;
    }
    long count = 0;
    int mid = start + (end-start)/2;

    count += mergeSort(arr, temp, start, mid);
    count += mergeSort(arr, temp, mid+1, end);

    count += merge(arr, temp, start, mid, end);
    for(int i=start; i<=end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return count;
}

long count_inversion(vector<int> &arr){
    long count = 0;   //inversion count
    vector<int> temp(arr.size(), 0);
    count = mergeSort(arr, temp, 0, arr.size()-1);
    return count;
}

int main(){

    vector<int> arr = {8, 4, 2, 1};

    cout << count_inversion(arr);


    return 0;
}