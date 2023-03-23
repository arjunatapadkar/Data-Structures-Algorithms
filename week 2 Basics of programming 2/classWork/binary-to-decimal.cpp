// correct 

#include<iostream>
#include<cmath>
using namespace std;

int binToDecimal(int bin){
    int result = 0;
    int i=0;
    while(bin>0){
        int digit = bin%10;
        result += digit * pow(2, i++);
        bin/=10;
    }

    return result;
}

int main(){

    int bin;
    cout << "Enter the binary number : " << endl;
    cin >> bin;

    cout << "Decimal representation : " << binToDecimal(bin) << endl;

    return 0;
}