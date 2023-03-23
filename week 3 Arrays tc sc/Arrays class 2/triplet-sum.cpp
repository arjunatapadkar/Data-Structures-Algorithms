
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9};
   cout << endl;
    int key = 10;
    for(auto i=0; i<a.size();i++ ){
        
        for(auto j = i+1; j<a.size(); j++){
            for(auto k = j+1; k<a.size(); k++){
                if(a[i] + a[j] + a[k] == key) 
                cout << "(" << a[i] << ", " << a[j] << ", "<< a[k]<<")"  << endl;
            }
        }
        
    }

    cout << endl;

    return 0;
}