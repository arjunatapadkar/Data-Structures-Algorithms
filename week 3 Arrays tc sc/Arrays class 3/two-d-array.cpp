

#include<iostream>
using namespace std;

int main(){

    // 2d array declaration
    int arr1[3][3];


    // 2d array initialization
    int arr[3][3] = {1, 2, 3,4, 5, 6, 7,8, 9};

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // 2d array printing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // taking input in 2d array
    cout << "enter the array " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr1[i][j] ;
        }
        cout << endl;
    }

    // cout 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}