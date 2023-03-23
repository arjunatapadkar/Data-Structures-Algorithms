



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6 ,7, 8,9};
    
    auto first = lower_bound(arr.begin(), arr.end(), 4);
    auto last = upper_bound(arr.begin(), arr.end(), 4);
    int total = last - first;
    
    cout << "first = " << first - arr.begin() << endl;
    // last gives the index+1
    cout << "last = " << last-arr.begin() - 1 << endl;
    cout << "total = " << total << endl;
    return 0;
}