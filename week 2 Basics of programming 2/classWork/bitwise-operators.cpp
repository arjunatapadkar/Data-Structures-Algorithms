

#include<iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    // and
    cout << "And : " << (a & b )<< endl;

    // or  
    cout << "Or : " << (a|b) <<endl;

    // xor
    cout << "Xor : " << (a^b) << endl;

    // not 
    cout << "not :  " << ~a << endl;
    cout << "not :  " << ~ b<< endl;

    int k = 5;

    cout << (++k) * (++k);

 
    return 0;
}