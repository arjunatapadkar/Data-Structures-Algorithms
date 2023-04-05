
#include<iostream>
using namespace std;

double sqrt(int n, int precision){

    int start = 1;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start <=end){

        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;

    }
    cout << ans;
    double finalAns = ans;
    double value = 0.1;

    for(int i=0; i<precision; i++){

        for(double j = finalAns; j * j <= n; j = j + value){
            finalAns = j;
        }
        value /= 10;
    }
    return finalAns;
}


int main(){

    int n;
    cout << "Number : " << endl;
    cin >> n;

    int precision;
    cout << "precision : " << endl;
    cin >> precision;

    double ans = sqrt(n, precision);

    cout << "Sqrt : " << ans << endl; 

    return 0;
}