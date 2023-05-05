

#include<iostream>
using namespace std;


// reverse
void rev_digits(int n){

    if(n==0) return;
    cout << n%10 << " ";
   
    return rev_digits(n/10);

}

void digits(int n){

    if(n==0) return;
   
    digits(n/10);


    cout << n%10 << " ";
}

int main(){

    int n;
     cin >> n;

     rev_digits(n);
    cout << endl;
     digits(n);

    return 0;
}