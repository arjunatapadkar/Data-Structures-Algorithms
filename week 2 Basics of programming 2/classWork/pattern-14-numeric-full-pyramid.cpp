

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the rows : " << endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // spaces 
        for(int col=0; col<n-row-1;col++){
            cout << " ";
        }

        // numbers
        for(int col=0; col<row+1; col++){
            cout << row+col+1;
        }

        // reverse counting
        for(int col=0; col<row; col++){
            cout << row*2 - col;
        }

        cout << endl;
    }

    return 0;
}