

#include<iostream>
using namespace std;

void solve(int& ref_var){
    cout << ref_var << endl;
    cout << &ref_var << endl;

    ref_var = ref_var + 243;

}

int main(){

    // creation of reference variable
    int a = 5;
    int & b = a;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << endl;

    // passing to function

    int x = 25;
    cout << &x << endl;
    cout << x << endl;
    solve(x);
    cout << &x << endl;
    cout << x << endl;

    return 0;
}