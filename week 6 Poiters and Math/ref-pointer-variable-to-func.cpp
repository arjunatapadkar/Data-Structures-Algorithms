

#include<iostream>
using namespace std;

void solve(int* & ptr){
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
}

int main(){



    int a = 34;
    int *p = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << endl;

    solve(p);
    cout << endl;
    
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << endl;

    return 0;
}