

#include<iostream>
using namespace std;

int main(){

    int a= 23;
    int b = 53;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;

    return 0;
}