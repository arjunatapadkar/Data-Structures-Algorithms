
#include<iostream>
using namespace std;

int main(){

    int rows;

    cout << "Enter the number of rows : " <<endl;
    cin >> rows;
    for(int row_num = 0; row_num < rows; row_num++){
        for(int col = 0; col < rows - row_num; col++){
            cout << "* " ;
        }
        cout << endl;
    }


    return 0;
}