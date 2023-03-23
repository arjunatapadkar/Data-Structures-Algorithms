

#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int> arr, int target){

    for(int it=0; it<arr.size(); it++){
        if(target==arr[it]) return it;
    }
    return -1;
}

int main(){


    vector<int> arr = {1,2 ,34, 5, 6, 7, 8, 90,45, 96};
    int target = 45;
    int ans = linear_search(arr, target);

    if(ans==-1){
        cout << "Tareget not found" << endl;
    }
    else{
        cout << "Target found at " << ans << endl;
    }
 
    return 0;
}