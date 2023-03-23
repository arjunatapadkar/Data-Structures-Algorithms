

// print all prime numbers from 1 to n;

#include<iostream>
using namespace std;

// print prime
void print_prime_nums(int n){
   
    for(int i=2; i<=n; i++){

        bool flag = true;
        for(int j=2; j<i;j++){

            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << i << " ";

    }
    cout << endl;
}

// main
int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    print_prime_nums(n);

    return 0;
}