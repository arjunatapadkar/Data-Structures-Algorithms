

// decimal to binary conversion by bitwise method

#include<iostream>
#include<cmath>
using namespace std;

int dec_to_bin(int n){
    int i=0;
    int result = 0;

    while(n>0){
        int bit = (1 & n) ;
        result+=  bit * pow(10, i++);
        n = n >> 1;
    }
    return result;
}

int main(){

    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    cout << "Binary : " << dec_to_bin(n) << endl;
   

    return 0;
}