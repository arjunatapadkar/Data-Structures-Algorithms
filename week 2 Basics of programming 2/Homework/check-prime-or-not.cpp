

// check number is prime or not

#include<iostream>
using namespace std;

// checking prime
bool check_prime(int n){
    // bool flag = true;    --not necessary
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

// main
int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    if(check_prime(n))
        cout << "Prime" << endl;
    else cout << "Not Prime " << endl;

    return 0;
}