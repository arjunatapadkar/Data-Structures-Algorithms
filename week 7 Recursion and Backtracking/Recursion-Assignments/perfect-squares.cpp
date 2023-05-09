

#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int perfect_squares(int n){

    cout << "function for n = " << n << endl; 

    // base case
    if(n == 0) return 1;
    if(n < 0 ) return 0;


    // processing 
    int ans = INT_MAX;
    int i=1;
    int end = sqrt(n);
    cout << "i = 1  && end = " << end << endl; 
    while (i<=end)
    {   
        cout << "for i = " << i << endl;
        int perfectSquare = i * i;
        cout << "perfecsquare = " << perfectSquare << endl;
        int numOfPerfectSquare = 1 + perfect_squares(n-perfectSquare);
        cout << "numberofperfectsq = " << numOfPerfectSquare << endl;
        if(numOfPerfectSquare < ans) ans = numOfPerfectSquare;
        cout << "curr ans = " << ans << endl;
        i++;
    }

    cout << "final  ans == " << ans << endl;
    return ans;
    

}

int ans(int n){
    return perfect_squares(n) - 1;
}

int main(){

    int n;
    cin >> n ;
     cout << ans(n) << endl;
   

    return 0;
}