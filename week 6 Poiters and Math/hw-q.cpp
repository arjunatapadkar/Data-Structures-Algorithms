

#include<iostream>
using namespace std;

int * solve(){

    int a = 5;
    int *ans = &a;
    return ans;
}

int main(){


    cout << *solve() << endl;

    return 0;
}