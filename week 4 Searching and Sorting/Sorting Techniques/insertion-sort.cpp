

#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> v = {5, 2, 7, 6 ,8, 3, 1, 4, 9};

    int n = v.size();
    
    // outer loop (n-1) times
    for(int round=1; round < n; round++){

        // step 1 - fetch
        int val = v[round];

        int j = round-1;

        for(; j >= 0; j--){

            if(v[j] > val){
                // shift
                v[j+1] = v[j];
            }
            else{
                // stop when element is less than value fetched
                break;
            }
        }

        // paste the copied element at appropriate position
        v[j+1] = val;
    }

    for(auto it : v){
        cout << it << " ";
    }
     cout << endl;

    return 0;
}