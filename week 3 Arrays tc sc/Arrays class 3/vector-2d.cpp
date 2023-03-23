

#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    // declaring 2d vector
    vector<vector<int>> arr;
    vector<vector<int>> arr1(2, vector<int>(4));

    // initialisation
    vector<vector<int>> arr3(3, vector<int>(3, 10));
    // printint array/vector
    print(arr3);

    // input in 2d vector

    cout << "enter the rows : "<< endl;
    int row;
    cin >> row;
    int col;
        cout << "enter the cols : " ;
        cin >> col;
    for(int i=0; i<row; i++){
        vector<int> rarr;
        for(int j=0; j<col; col++){
            int temp;
            cin >> temp;
            rarr.push_back(temp);
        }
        arr.push_back(rarr);
    }

    return 0;
}