

#include<iostream>
using namespace std;


    int numRollsToTarget(int n, int k, int target) {
        
        // base case
        if(target < 0) return 0;
        if(target == 0 && n == 0) return 1;
        if(target == 0 && n != 0) return 0;
        if(target != 0 && n == 0) return 0;

        // 0ne case
        int ans = 0;
        for(int i=1; i <= k; i++){
            ans = ans + numRollsToTarget(n-1, k, target - i);
        }
        return ans;
    }



int main(){

    int n, k, target;
    cin >> n >> k >> target;

    cout << numRollsToTarget(n, k, target) << endl;

    return 0;
}
