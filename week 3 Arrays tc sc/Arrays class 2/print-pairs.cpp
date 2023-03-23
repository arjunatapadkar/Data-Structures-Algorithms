

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a{1, 2, 3, 4, 5};
   cout << endl;

    for(auto i=0; i<a.size();i++ ){
        
        for(auto j = i+1; j<a.size(); j++){
            cout << "(" << a[i] << ", " << a[j] << ")" << "  " ;
        }
        cout << endl;
    }

    

    return 0;
}