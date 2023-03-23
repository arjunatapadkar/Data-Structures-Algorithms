

#include<iostream>
using namespace std;

void print(int arr[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
 
int  transpose(int arr[][3]){
    int tmp[3][3];

    for(int i=0; i<3; i++)
        for(int j=0; j<3;j++)
            tmp[i][j] = arr[j][i];
    
    arr = tmp;
    print(tmp);
    print(arr);
}

int main(){

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // original
    cout << "original : " << endl;
    print(arr);
    
    // transpose
    cout << "transpose : " << endl;
    transpose(arr);

   

    return 0;
}