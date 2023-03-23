

#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl;
    vector<int> a{1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1};
    int start = 0;
    int end = a.size() - 1;
    int i = 0;
    while(start < end){
        if(a[start] == 1){
            swap(a[start], a[end]);
            end--;
        }
        else{
            start++;
        }
    }
    for(auto it : a){
        cout << it << " ";
    } 
    cout << endl;

    return 0;
}