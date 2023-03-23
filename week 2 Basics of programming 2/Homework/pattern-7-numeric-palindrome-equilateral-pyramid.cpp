

#include<iostream>
using namespace std;

// one method 
void print_pyramid(int n){
    int k = n;
    for(int row=0; row<n; row++){

        int count = 1;
        for(int col=0; col <k; col++ ){

            if(col < n-row-1){
                cout << " ";
            }
            else if(col <n){
                cout << count++;
            }
            else if(col==n){
                count -= 2;
                cout << count--;
            }
            else{
                cout << count--;
            }
        }

        k++;
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the rows : " <<endl;
    cin >> n;

    print_pyramid(n);

    // second method
    for(int row=0; row<n; row++){

        // spaces
        for(int col=0; col < n-row-1; col++){
            cout << " ";
        }

        // nums
        for(int col=0; col<row+1; col++){
            cout <<col+1;
        }

        // nums 
        for(int col=0; col<row; col++){
            cout << row-col;
        }


        cout << endl;
    }

    return 0;
}