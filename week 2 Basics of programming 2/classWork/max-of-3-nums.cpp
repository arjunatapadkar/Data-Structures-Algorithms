

#include<iostream>
using namespace std;

int maxi(int a, int b, int c){
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    return c;
}

int main(){

    int n1, n2, n3;
    cout << "Enter the numbers : " << endl;
    cin >> n1 >> n2 >> n3;

    cout << "The max number is " << maxi(n1, n2, n3) << endl;

    return 0;
}