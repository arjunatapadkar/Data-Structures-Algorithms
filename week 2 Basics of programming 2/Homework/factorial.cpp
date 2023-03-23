

// find factorial of number

// -- the factorial of numbers greater than 12 results in greater than 32-bit  but the int have size of 32-bits only hence it ignore the bits after 32 and gives the answers which are incorrect 
// now to overcome this use long long keyword instead of int
 

#include<iostream>
using namespace std;

// factorial
long long fact(int n){
    long long factorial = 1;
    for(int i=1;i<=n;i++)
        factorial *= i;
    return factorial;
}

int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    cout << "Factorial : " << fact(n) << endl;

    return 0;
}