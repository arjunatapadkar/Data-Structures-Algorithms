
#include<iostream>
using namespace std;

int main(){

    int num_of_rows;
    cout << "Enter the number of rows : "<< endl;
    cin >> num_of_rows;

    for(int row=0; row<num_of_rows;row++){

        for(int col=0; col<num_of_rows;col++){

            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}