
//  solved
/*
Enter the rows : 
4
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;

    int count = 1;

    for(int row=0; row<n; row++){

        
        for(int col=0; col < row+1; col++){
            if(col==row){
                cout << count++;
            }
            else{
                cout << count++ << "*";
            }
        }
        cout << endl;
    }
    int start = count - n;
    for(int row=0; row<n; row++){

        int k=start;
        
        for(int col=0; col < n-row; col++){
            if(col==n-row-1){
                cout << k++;
            }
            else{
                cout << k++ << "*";
            }
        }

        start = start - (n-row-1);
        cout << endl;
    }

    return 0;
}