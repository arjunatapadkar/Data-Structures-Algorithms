

#include<iostream>
using namespace std;

int main(){

    int total_rows;

    cout << "Enter the row number : " <<endl;

    cin >> total_rows;

    for(int row_num = 0; row_num < total_rows; row_num++){

        for(int col_num = 0; col_num < total_rows-row_num; col_num++){
            cout << col_num+1 << " ";
        }
        cout << endl;
    }


    return 0;
}