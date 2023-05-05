

#include<iostream>
using namespace std;

int maxi(int a[],int mx, int i, int n){
    if(i==n) return mx;
    mx = max(mx, a[i]);
    maxi(a, mx, i+1, n);
}

int mini(int a[],int mn, int i, int n){
    if(i==n) return mn;
    mn = min(mn, a[i]);
    mini(a, mn, i+1, n);
}



int main(){

    int a[] = {1, 2, 3,4,6, 8,3,2, 90, 0};
    int mx = a[0];
    int mn = a[0];

    cout << maxi(a, mx, 0, 10) << endl;
    cout << mini(a, mn, 0, 10) << endl;
    return 0;
}