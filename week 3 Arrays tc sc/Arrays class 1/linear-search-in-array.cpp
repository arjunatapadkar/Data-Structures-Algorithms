

#include<iostream>
using namespace std;

// linear search
int linearSearch(int arr[], int size, int key){
    
    for(auto i=0; i<size; i++){
        if (key==arr[i])
        {
            cout << "present at ";
            return i+1; 
        }
        
    }
    return -1;
}

// main
int main(){

    int arr[] = {12, 53, 7, 3, 84, 2, 86, 25, 88, 98};
    int size = 10;

    cout << linearSearch(arr, size, 7) << endl;
    cout << linearSearch(arr, size, 84) << endl;
    cout << linearSearch(arr, size, 98) << endl;
    cout << linearSearch(arr, size, 12) << endl;
    cout << linearSearch(arr, size, 0) << endl;


    return 0;
}