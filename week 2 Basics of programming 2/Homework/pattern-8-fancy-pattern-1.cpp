



#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;

    for(int row=0; row<n; row++){

        // stars
        for(int col=0; col < n+3-row; col++){
            cout << "*";
        }

        // nums
        for(int col=0; col<row+1; col++){
            
            if(col!=row){
                cout << row+1 <<"*" ;
            }
            else{
                cout << row+1;
            }
        }

        // stars
        for(int col=0; col < n+3-row; col++){
            cout << "*";
        }


        cout << endl;
    }

    return 0;
}