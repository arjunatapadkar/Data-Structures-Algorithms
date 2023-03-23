

#include<iostream>
using namespace std;

// linear search
bool linearSearch(int arr[][3], int key){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(key==arr[i][j])
                return true;
        }
    }
    return false;
}

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    bool flag = linearSearch(arr, 12); 

    if(flag){
        cout << "Number found" << endl;
    }
    else{
        cout << "Number did not found" << endl;
    }


    return 0;
}