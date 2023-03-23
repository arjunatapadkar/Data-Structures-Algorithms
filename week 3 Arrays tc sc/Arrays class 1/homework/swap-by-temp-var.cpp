

#include<iostream>
using namespace std;

int main(){

    int a = 34;
    int b = 65;

    int temp = a;
    a = b;
    b= temp;

    cout << a << " " << b << endl;

    return 0;
}