

#include<bits/stdc++.h>

using namespace std;

int divide (int dividend, int divisor){

    if(divisor==0 || (dividend == INT_MIN && divisor == -1)) return INT_MAX;
    if(divisor==0 || (dividend == INT_MIN && divisor == 1)) return INT_MIN;


    int s = 0;
    int e = abs(dividend);
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){

        if(abs(mid * divisor) == abs(dividend)){
            // perfect ans
            ans =  mid;
            break;
        }

        if(abs(mid * divisor) < abs(dividend)){
            // not perfect
            // store 
            ans = mid;
            // right search
            s = mid + 1;
        }
        else{
            // left search
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
        return ans;

    return -ans;
}

int main(){

    int dividend = INT_MIN;
    int divisor = -1;,

    int ans = divide(dividend, divisor);

    cout << "Quotient : " << ans << endl;

    return 0;
}