

#include<iostream>
using namespace std;

void util(int *ptr){

    cout << ptr << endl;
    cout << *ptr << endl;
    // ptr = ptr + 1;
    *ptr = *ptr + 1;

}

int main(){

    int a = 5;
    int *p = &a;

    cout << *p << endl;
    util(p) ;
    cout << *p << endl;



    return 0;
}