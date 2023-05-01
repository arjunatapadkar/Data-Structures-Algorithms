

#include<iostream>
using namespace std;

void solve(int **ptr){

    cout << ptr << endl;
    cout << *ptr << endl;
    cout << **ptr << endl;
    // ptr = ptr + 1;
    // *ptr = *ptr + 1;
    **ptr = **ptr + 1;
}

int main(){


    int x = 35;
    int *p = &x;
    int **q = &p;

    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout <<q << endl;
    cout << *q << endl;
    cout << **q << endl;
    cout << endl;
    solve(q);
    cout << endl;

     cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout <<q << endl;
    cout << *q << endl;
    cout << **q << endl;

    return 0;
}