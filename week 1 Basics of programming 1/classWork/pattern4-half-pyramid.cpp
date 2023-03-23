

#include<iostream>
using namespace std;

int main(){

    int row_num;

    cout << "Enter the Row number : "<<endl;

    cin >> row_num;

    for(int row = 0; row < row_num; row++){

        for(int col = 0; col <=row; col++){
            cout<< "* " ;
        }
        
        cout << endl;
    }

    return 0;
}