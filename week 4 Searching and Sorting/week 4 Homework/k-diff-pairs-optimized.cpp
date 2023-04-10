
// Approach --> Two Pointer




// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// #include<utility>
#include<bits/stdc++.h>
using namespace std;

int bin_search(vector<int> arr, int start ,int target){

    
    int end = arr.size() -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;

    }
    return -1;
}

int findPairs(vector<int> nums, int k) {
     
        int n = nums.size();
        set<pair<int, int>> s;
        
        sort(nums.begin(), nums.end());
        
        int i = 0, j = i+1;
        while(j < n){

            if(i==j) j++;

            int diff = nums[j] - nums[i];
            if(diff == k){
                auto p = make_pair(nums[i++], nums[j++]);
                s.insert(p);
            }
            else if(diff > k){
                i++;
            }
            else{
                j++;
            }
            

        }

        return s.size();
}

int main(){


    vector<int> v = {1,2,4,4,3,3,0,9,2,3};
    int k = 3;

    int ans = findPairs(v, k);

    // Approach 2  ---> Binary Search
    sort(v.begin(), v.end());
    set<pair<int, int>> s;
    for(int i=0; i< v.size(); i++){

        if(bin_search(v, i+1, v[i] + k) != -1){
            s.insert({v[i], v[i] + k});
            // cout << v[i] << " " << v[i] + k << endl;
        }

    }

    cout << ans << endl;
    cout << s.size() << endl;

    return 0;
}