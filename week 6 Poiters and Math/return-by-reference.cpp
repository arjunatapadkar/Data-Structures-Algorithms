
#include<iostream>
using namespace std;

int& solve(int& a, int& b){

    int c = a + b;
    int& k = c;
    return k; 
}

int main(){

    int a = 453;
   int b = 254;

    cout << a << " + " << b << " : " << a + b  << endl;

    int & ans = solve(a, b);

    cout << ans << endl;

    return 0;
}