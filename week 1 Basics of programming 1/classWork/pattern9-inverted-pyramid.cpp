
#include<iostream>
using namespace std;


int main(){

    int total_rows;
    cout << "Enter the total rows : "<< endl;
    cin >> total_rows;

    for(int row_num=0; row_num < total_rows; row_num++){

        // spaces
        for(int col_num = 0; col_num<row_num;col_num++){
            cout << " ";
        }

        // stars
        for(int col_num=0; col_num<total_rows-row_num; col_num++){
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}