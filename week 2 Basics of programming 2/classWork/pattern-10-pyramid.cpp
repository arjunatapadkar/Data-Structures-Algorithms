
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows : " << endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // printing spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }

        // printing stars 
        for(int col=0; col<row+1; col++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}