

// Convert given Binary number to Decimal.

#include<iostream>
using namespace std;

int binaryToDecimal(int b){
    int ans = 0;
    int c=0;
    while(b){
        ans = ans + (b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter the binary number : " << endl;
    cin >> n;

    cout << "Decimal : " << binaryToDecimal(n) << endl;
    return 0;
}