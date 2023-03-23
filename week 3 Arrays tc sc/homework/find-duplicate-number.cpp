

#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int> arr){

    // bitwise xor method
    // int ans = 0 ;
    // for(auto it: arr)
    //     ans = ans ^ it;
    
    // for(auto i=1; i<arr.size(); i++)
    //     ans = ans ^ i;

    // return ans;



    // swap method

    // for(int i=0; i<arr.size(); i++){
    //     swap(arr[0], arr[arr[0]]);
    // }
    // return arr[0];


    // negative marking
    for(int i=1; i<=arr.size(); i++){
        if(arr[arr[i]] < 0)
            return abs(arr[i]);
        arr[arr[i]] *= -1;
    }
    return -1;
}

int main(){

    vector<int> a ={1, 3, 4, 2, 2};
    cout << duplicate(a) << endl;

   
    vector<int> b ={1, 3, 4, 2, 5, 6, 7, 8, 5};
    cout << duplicate(b) << endl;

    return 0;
}