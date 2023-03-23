


#include<iostream>
using namespace std;

// another short method for printing diamond

void printDiamond(int n){

    for(int row=0; row<2*n-1; row++){

        int cond = row < n? row+1 : n-(row%n)-1;

        for(int col=0; col < cond ;col++){
            cout << "* ";
        }


        cout << endl;

    }

}

int main(){

    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;
    printDiamond(n);
    for(int row=0; row<n; row++){

        // stars
        for(int col=0; col < row+1; col++){
            cout << "* ";
        }

        cout << endl;
    }
    for(int row=0; row<n-1; row++){

        // stars
        for(int col=0; col < n-row-1; col++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}