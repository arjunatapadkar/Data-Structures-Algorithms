
#include<iostream>
using namespace std;

int length(char arr[]){
    int i=0;
    for(; arr[i] != '\0'; ){
        i++;
    }
    return i;
}

int main(){

    char arr[1000];
    cin >> arr;

    int ans = length(arr);

    cout << ans << endl;


    return 0;
}