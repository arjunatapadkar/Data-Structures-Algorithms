
#include<iostream>
using namespace std;

int main(){

    int row_num, col_num;

    cout << "enter the rownum and column :" << endl;

    cin >> row_num >> col_num;
 

    for(int row=0; row<row_num; row++){

        for(int col=0; col<col_num; col++){

            if(row==0 || col==0 || row==row_num-1 || col== (col_num-1)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout <<endl;
    }


    return 0;
}