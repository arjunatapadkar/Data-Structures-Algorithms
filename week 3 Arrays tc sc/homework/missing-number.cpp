

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> arr){
    int ans = 0;
    for(auto it: arr)
        ans = ans ^ it;
    for(auto i=0; i<=arr.size(); i++)
        ans = ans ^ i;
    return ans;
}

int main(){

    vector<int> a = {3, 0, 1};
    cout << missingNumber(a) << endl;

    vector<int> b = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << missingNumber(b) << endl;


    return 0;
}