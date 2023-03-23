
#include<iostream>
using namespace std;

int main(){

    int total_rows;
    cout << "Enter the rows : " <<endl;
    cin >> total_rows;

    for(int row_count =0 ; row_count < total_rows; row_count++){

        for(int col_count=0; col_count <= row_count; col_count++){

            cout << col_count+1 << " ";
        }
        cout << endl;

    }


    return 0;
}