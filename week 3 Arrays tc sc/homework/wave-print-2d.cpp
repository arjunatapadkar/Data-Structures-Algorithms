

#include<iostream>
#include<vector>
using namespace std;


// row-wise waveprint
void wavePrintrow(vector<vector<int>> arr){
    for(int i=0; i<3; i++){
        if(i%2==0)
            for(int j=0; j<3;j++)
                    cout << arr[i][j] << " ";
        else
            for(int j=2; j>=0; j--)
                cout << arr[i][j] << " ";
    }
}
// col-wise waveprint
void wavePrintcol(vector<vector<int>> arr){
    for(int i=0; i<3; i++){
        if(i%2==0)
            for(int j=0; j<3;j++)
                    cout << arr[j][i] << " ";
        else
            for(int j=2; j>=0; j--)
                cout << arr[j][i] << " ";
    }
}

void print(vector<vector<int>> a){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
        
        
}

int main(){

    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(a);
    wavePrintcol(a);
    cout << endl;
    wavePrintrow(a);

    return 0;
}