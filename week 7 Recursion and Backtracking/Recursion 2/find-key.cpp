

#include<iostream>
#include<string> 
#include<vector>
using namespace std;


void find_key(string &str, int& l, int& i, char& key, vector<int>& ans){

    if(i >= l) return;

    if(str[i] == key) {
        ans.push_back(i);
    }

    i++;
    return find_key(str, l, i, key, ans);

}

int main(){

    string str = "Arjun Atapadkar";
    char key = 'a';
    int i=0;
    int l = str.length();
    // bool ans = find_key(str,l, i, key);
    // int ans = find_key(str,l, i, key);
    // cout << ans << endl;
    // find_key(str, l, i, key);
    // if(ans){
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not found" << endl;
    // }
    
    vector<int> ans ;
    find_key(str, l, i, key, ans);
    for(auto it : ans){
        cout << it << endl;
    }
    return 0;
}