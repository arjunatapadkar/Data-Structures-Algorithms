

#include<iostream>
using namespace std;

bool bin_search(int arr[][4], int target, int i, int j){

    int start = 0; 
    int end = i * j -1;

    int mid = (start + end)/2;

    while(start <= end){
        int rowInd = mid / j;
        int colInd = mid % j;

        if(arr[rowInd][colInd] == target){

            return true;
        }
        else if(arr[rowInd][colInd] < target){

            start = mid + 1;
        }
        else {

            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return false;
}

int main(){

    int a[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15 ,16}, {17, 18, 19, 20}};

    int target = 17;
    int row = 5;
    int col = 4;
    bool flag = bin_search(a, target, row, col);
    
    if(flag){
        cout << "Found "<< endl;
    }
    else {
        cout << "Not Found " << endl;
    }

    return 0;
}