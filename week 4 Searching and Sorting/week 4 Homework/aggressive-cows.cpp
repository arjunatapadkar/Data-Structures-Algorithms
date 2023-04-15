/*

You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
The first line of input contains two space-separated integers n and k.
The second line contains n space-separated integers denoting the position of the stalls.

Example 1:

Input:
n=5 
k=3
stalls = [1 2 4 8 9]
Output:
3
Explanation:
The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, 
which also is the largest among all possible ways.



*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


 bool isPossible(int n, int k, vector<int> stalls, int mid){

    // first cow
        int pos = stalls[0];
        // cow count 
        int c = 1;
        for(int i=1; i<n; i++ ){
            
            // if this is valid place
            if(stalls[i] - pos >=mid){
                // cow coount++ & new position of cows
                c++;
                pos = stalls[i];
            }
            
            if(c == k){
                // count is equal to cows
                return true;
            }
        }
        return false;
    }


int solve(int n, int k, vector<int> stalls) {
        
        sort(stalls.begin(), stalls.end());
    
        // 
        int start = 0;
        int end = stalls[n-1] - stalls[0];
        int ans = -1;
        while(start <= end){
            int mid = (start + end) >> 1;
            if(isPossible(n, k, stalls, mid)){
                // possible solution
                ans = mid;

                // all max ans present at right side
                start = mid + 1;
            }
            else{
                // cant place cows at positions > mid
                end = mid - 1;
            }
            
        }
        
        return ans;
        
    }

int main(){



   int  n=5 ;
    int k=3;
    vector<int> stalls = {1, 2, 4, 8, 9};


    int ans = solve(n, k, stalls);

    cout  << ans << endl;


    return 0;
}