
// for all repeating elements just store it in an vector and return



#include<bits/stdc++.h>

using namespace std;

int repeatingElement(vector<int> a){
    

    // O(n^2)

    // for(int i=0; i<a.size()-1; i++){

    //     for(int j=i+1; j<a.size(); j++){
    //         if(a[i]==a[j])
    //             return a[i];
                
    //     }
    // }
    // return -1;


    // hashing : unordered_map - O(N)
    unordered_map<int, int> hash;
    for(int i=0; i<a.size(); i++){
        hash[a[i]]++;
    }

    for(int i=0;i<a.size();i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
    
}

int main(){

    vector<int> a = {1,  3,4, 5, 6, 6,7, 8, 9, 10, 13, 2, 14};
    cout << repeatingElement(a);
    return 0;
}