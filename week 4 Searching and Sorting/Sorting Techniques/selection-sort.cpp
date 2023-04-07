

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {5, 2, 7, 6 ,8, 3, 1, 4, 9};
    
    int n = v.size();

    // selection sort

    // outer loop - (n-1) rounds
    for(int i=0; i<n-1; i++){

        // minimum index
        int minInd = i;
        // inner loop - index of minimum element in range i->n
        for(int j=i+1; j < n; j++){
            
            // new minimum, then store
            if(v[j] < v[minInd]){
                minInd = j;
            }
        }

        // swap
        swap(v[i], v[minInd]);

    }


    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;



    return 0;
}