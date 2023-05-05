

#include<iostream>
using namespace std;

int climb_stairs(int n){
    if(n==0 || n==1) return 1;

    return climb_stairs(n-1) + climb_stairs(n-2);
}


int main(){

    int n;
    cin >> n ;

    cout << climb_stairs(n) << endl;

    return 0;
}