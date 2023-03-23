

// set k'th bit;

#include<iostream>
using namespace std;

// set-bit

int set_bit(int n, int k){

    int mask = 1;
    for(int i=1; i<k;i++){
        mask = mask<<1;
    }
    int result = (n | mask);
    cout << "mask : " <<mask << endl;
    return result;

}

// main
int main(){

    int n;
    cout << "Eneter the number : " << endl;
    cin >> n;
     
    int k;
    cout << "Which bit to be set? " << endl;
    cin >> k;

    cout << "Result : " << set_bit(n, k) << endl;

    return 0;
}