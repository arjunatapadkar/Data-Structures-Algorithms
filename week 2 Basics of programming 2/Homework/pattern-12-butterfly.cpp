

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // stars
        for(int col=0; col <=row; col++){
            cout << "*";
        }

        // spaces
        for(int col=0; col<(n-row-1)*2; col++){
            cout <<" ";
        }

        // stars
        for(int col=0; col <=row; col++){
            cout << "*";
        }

        cout << endl;
    }

    for(int row=0; row<n; row++){

        // stars
        for(int col=0; col <n-row; col++){
            cout << "*";
        }

        // spaces
        for(int col=0; col<row*2; col++){
            cout <<" ";
        }

        // stars
        for(int col=0; col <n-row; col++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}