

#include<iostream>
using namespace std;


int main(){

    cout << "Hello World!!" << endl;

    int a = 34;
    cout << " the size of int : " << sizeof(a) << endl;

    char c = 'a';
    cout << "the size of char :" << sizeof(c) <<endl;

    bool flag = 1;
    cout << "the size of bool :" << sizeof(flag) <<endl;

    float f = 3.4;
    cout << "the size of float : " << sizeof(f )<<endl;

    long l = 35;
    cout << "the size of long :"<< sizeof(l) <<endl;

    long long ll = 3;
    cout << "the size of long long :" <<sizeof(ll) << endl;


    // typecasting --->
    //  1. implicit typecasting
    //  2. Explicit typecasting

    // implicit typecasting
    char ch = 97;
    cout << ch << endl;

    int num = 'b';
    cout << num << endl;


    // explicit typecasting

    double d = 5.7;
    int x = (int)d + 10;
    cout << x << endl;



    return 0;
}