

// decimal to binary conversion

#include<iostream>
#include<math.h>
using namespace std;

int dec_to_bin(int n){
    int result = 0;
    int i=1;
    while(n>0){
         
        int digit = n%2;
        // result += digit * i;
        result += digit * i;
        n/=2;
        i *= 10;
    }
    return result;
    cout << "final result : " << result << endl;
}

int main(){

    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    cout << "Binary : " << dec_to_bin(n) << endl;


    return 0;
}