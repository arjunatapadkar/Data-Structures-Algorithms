
#include<iostream>
using namespace std;

int main(){

    // basic
    // int a = 5;
    // int *p = &a;

    // cout << a << endl;       // 5
    // cout << &a << endl;       // x
    // cout << p << endl;        // x
    // cout << *p << endl;       // 5
    // cout << &p << endl;       // y



    // double pointer

    int a = 5;
    int*p = &a;
    int **q = &p;

    cout << a << endl;        // 5
    cout << &a << endl;       // x
    cout << p << endl;         // x;
    cout << *p << endl;        // 5
    cout << &p  << endl;       // y
    cout << q << endl;         // y
    cout << *q << endl;        //x
    cout << **q << endl;       // 5





    return 0;
}