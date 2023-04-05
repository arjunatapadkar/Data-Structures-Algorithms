

#include<iostream>
using namespace std;

int sqrt(int num){

    int start = 1;
    int end = num-1;
    int mid = start +(end - start)/2;
    int ans = -1;
    while(start < end){

        if(mid * mid == num)
            return mid;

        else if(mid * mid > num){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }

        mid = start +(end - start)/2;
    }
    return ans;
}

int main(){

    int n;
    cout << "enter the number : " << endl;
    cin >> n;

    cout << "sqrt of " << n  << " is : " << sqrt(n) << endl;

    return 0;
}