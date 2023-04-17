#include<iostream>
using namespace std;


void rev(char arr[]){

    int s =0, e = 4;
    while(s < e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){

    char a[] = "Arjun";

    cout << a << endl;
    rev(a);
    cout << a << endl;

    return 0;
}