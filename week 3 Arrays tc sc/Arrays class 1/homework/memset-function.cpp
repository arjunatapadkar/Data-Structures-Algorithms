

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int arr[10] ;
    memset(arr, -1, 10);

    for(auto i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}