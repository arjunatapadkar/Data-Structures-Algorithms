

// find number is even or odd

#include<iostream>
using namespace std;

// even-odd 
void check_even_odd(int num){

    if(num%2==0)
        cout << "Number is even" << endl;
    else
        cout << "Number is odd " << endl;
}


// main
int main(){

    int num;
    cout << "Enter the number : " << endl;
    cin >> num;

    check_even_odd(num);

    return 0;
}