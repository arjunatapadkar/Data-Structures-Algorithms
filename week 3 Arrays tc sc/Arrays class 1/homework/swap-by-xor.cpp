


#include<iostream>
using namespace std;

int main(){

    int a = 43; 
    int b = 64;

    a = a ^ b;     // a stores a xor b
    b = a ^ b;     // b stores new a xor b i.e. the both b - 64 cancels out and a - 43 remains and it is stored in b i.e. b = 43
    a = a ^ b;     // a stores new a xor b i.e. a is (43 ^ 64) and xor with b (43) i.e (43 ^ 64 ^ 43) a will be 64

    cout << a  << " " << b << endl;


    return 0;
}