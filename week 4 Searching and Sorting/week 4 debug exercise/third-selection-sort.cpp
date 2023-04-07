

#include<iostream>
using namespace std;



void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


int main(){

    int arr[6] = {3, 6, 8, 1, 5, 34};

    selectionSort(arr, 6);

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;


    return 0;
}
