

#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}


int main(){

    int num1;
    cout << "Enter the number 1 : " << endl;
    cin >> num1;

    int num2;
    cout << "Enter the number 2 : " << endl;
    cin >> num2;

    cout << "Sum of " << num1 << " and " <<num2 << " is " << add(num1, num2) <<endl;


    return 0;
}