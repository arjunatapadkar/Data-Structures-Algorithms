

// print all digits from integer

#include<iostream>
using namespace std;

// print-digits
void print_digits(int n){
    while(n>0){
        cout << n%10 <<" ";
        n/=10;
    }
}
// main
int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    print_digits(n);

    return 0;
}