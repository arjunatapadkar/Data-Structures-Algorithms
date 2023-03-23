
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the n : " << endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // pyramid
        for(int col=0; col<n-row; col++){
            cout << "*";
        }

        // spaces
        for(int col=0; col< 2*row; col++){
            cout << " ";
        }

        // pyramid
        for(int col=0; col<n-row; col++){
            cout << "*";
        }

        cout << endl;
    }

    for(int row=0; row<n; row++){

        // pyramid
        for(int col=0; col<row+1; col++){
            cout << "*";
        }

        // spaces
        for(int col=0; col<2*(n- row)-2; col++){
            cout << " ";
        }

        // pyramid
        for(int col=0; col<row+1; col++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}