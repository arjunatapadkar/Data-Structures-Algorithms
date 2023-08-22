
#include<iostream>
using namespace std;

int partition(int* arr, int s, int e){

    // step 1 - choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2: find right position for pivotelement
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    // set pivotelement to the right position
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);

    pivotIndex = rightIndex;

    // now check the wrongly placed elements
    int i = s;
    int j = e;

    while( i < pivotIndex && j > pivotIndex ){

        while(arr[i] <= pivotElement ) {

            i++;
        }

        while(arr[j] > pivotElement) {
            j--;
        }


        // check if it exceeds the pivotindex in respective direction
        if( i < pivotIndex && j > pivotIndex){

        swap(arr[i++], arr[j--]);
        }
    }



    return pivotIndex;


}

void quikSort(int* arr, int s, int e){
    // Quicksort logic

    // base case if s==e or s>e
    if(s >=e) return;

    // partition logic which returns pivotIndex
    int p = partition(arr, s, e);

    // left sort
    quikSort(arr, s, p-1);

    // right sort
    quikSort(arr, p+1, e);

}

int main(){

    int arr[] = {8, 1, 3, 4, 20, 50, 30, 5, 34, 64, 10, 25}; 
    int n  = 12;

    int s = 0, e = n-1;
    quikSort(arr, s, e);

    for(int i=0; i<n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}