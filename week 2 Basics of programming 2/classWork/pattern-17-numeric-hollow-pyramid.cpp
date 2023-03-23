

#include<iostream>
using namespace std;


int main(){


    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }

        // numbers
        for(int col=0; col<row+1; col++){
            if(col==0|| col==row|| row==n-1){
                cout << col+1 << " ";
            }
            else{
                cout << "  ";
            }
        }

        cout << endl;
    }


    return 0;
}