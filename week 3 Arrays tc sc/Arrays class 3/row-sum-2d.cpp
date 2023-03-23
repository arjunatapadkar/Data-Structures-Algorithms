


#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // addition of row elements row wise
    cout << "row-wise :  "<< endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        cout << "sum of row " << i << " : " << sum << endl;
    }


    // sum of columns
    cout << "col-wise : " << endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[j][i];
        }
        cout << "sum of col " << i << " : " << sum << endl;
    }

    

    return 0;
}