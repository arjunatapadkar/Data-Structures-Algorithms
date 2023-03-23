

// reverse an integer

#include<iostream>
using namespace std;
// reverse integer
int reverse(int n){

    int result =0;

    while(n>0){
        int digit = n%10;
        result = result * 10 + digit;
        n/=10;

    }
    return result;
}

// main
int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    cout << "Reverse : " << n << " : " << reverse(n) << endl;
    
    return 0;
}