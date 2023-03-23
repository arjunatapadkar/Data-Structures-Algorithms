

// print number of set bits;

#include<iostream>
using namespace std;
int number_of_set_bits(int n){
    int count = 0;

    while(n>0){
        if(n&1==1)
            count++;
        n=n>>1;
    }
    return count;
}

int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    cout << "set bits : " << number_of_set_bits(n) << endl; 

    return 0;
}