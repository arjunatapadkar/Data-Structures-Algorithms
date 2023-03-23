/*

Enter the number of rows : 
15


*
*1*
*121*
*12321*
*1234321*
*123454321*
*12345654321*
*1234567654321*
*123456787654321*
*1234567654321*
*12345654321*
*123454321*
*1234321*
*12321*
*121*
*1*
*



*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows : " << endl;
    cin >> n;
cout << "*\n";
    for(int row=0; row<n;row++){

        int cond = (row<=(n/2))? 2 * row : 2*(n-row-1);
        cout << "*";
        for(int col = 0; col <= cond ; col++){

            if(col<=cond/2){
                cout << col+1;
            }
            else{
                cout << cond - col + 1;
            }
        }

        cout << "*"<<endl;
    }
    cout << "*"<<endl;


    return 0;
}