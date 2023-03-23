

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{2, 2,  4, 6, 8, 10};

    vector<int> ans ;

    for(auto i=0; i<a.size();i++ ){
        for(auto j=0; j<b.size(); j++){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                b[j] = -INT_MIN;
                break;
            }
        }
    }

    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}