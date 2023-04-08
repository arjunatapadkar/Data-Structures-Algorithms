

#include<iostream>
#include<vector>
#include<set>
#include<utility>
using namespace std;

int findPairs(vector<int> nums, int k) {
        int count = 0;
        int n = nums.size();
        set<pair<int, int>> s;
        // outer loop
        for(int i=0; i<n-1; i++){

            // inner loop
            for(int j=i+1; j<n; j++){
                int val = (nums[i] - nums[j]);
                
                if(abs(val) == k){ 
                   pair<int, int> p = make_pair(nums[i], nums[j]);
                   if(p.first > p.second) swap(p.first, p.second);
                   s.insert(p); 
                }
            }

        }
        return s.size();
}

int main(){


    vector<int> v = {1,2,4,4,3,3,0,9,2,3};
    int k = 3;

    int ans = findPairs(v, k);

    cout << ans << endl;

    return 0;
}