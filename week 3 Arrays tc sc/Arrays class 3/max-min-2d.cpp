

#include<iostream>
using namespace std;

// max number in 2d array - 

int maxi(int arr[][3]){

    int mx = INT16_MIN;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(mx<arr[i][j])
                mx = arr[i][j];
        }
    }
    return mx;
}


// min number in 2d array - 

int mini(int arr[][3]){

    int mn = INT16_MAX;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(mn>arr[i][j])
                mn = arr[i][j];
        }
    }
    return mn;
}

int main(){

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "max = " << maxi(arr) << endl;
    cout << "min = " << mini(arr) << endl;

    return 0;
}