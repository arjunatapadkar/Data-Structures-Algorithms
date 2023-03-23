
#include<iostream>
using namespace std;

int main(){

    int total_rows;
    cout << "Enter the number of total rows : " << endl;
    cin >> total_rows;

    // iterating rows 
    for(int row_num=0; row_num < total_rows; row_num++){

        // for printing spaces 
        for(int col_num=0; col_num < (total_rows-row_num-1); col_num++){
            cout << " ";
        }

        for(int col_num = 0; col_num < row_num+1; col_num++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}