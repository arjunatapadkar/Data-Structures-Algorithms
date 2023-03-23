

#include<iostream>
using namespace std;

int main(){

    // int a = 'A';
    // cout << a ;
    int n;
    cout << "Enter the n : " << endl;
    cin >> n;

    

    for(int row=0; row<n; row++){

        char ch = 'A';
        
        for(int col = 0; col<row+1; col++){
            cout << ch++ << " ";
        }
        ch= ch-2;
        for(int col=0; col < row;col++){
            cout << ch-- << " ";
        }


        cout << endl;
    }

    return 0;
}