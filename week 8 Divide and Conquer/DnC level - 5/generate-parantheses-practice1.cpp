
#include<iostream>
#include<vector>
using namespace std;

void printAns(vector<string> & ans){
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
}
void solve(vector<string> &ans, string &str, int open, int close){

    // base case;
    if(open == 0 && close == 0){
        ans.push_back(str);
        return ;
    }

    // one condition  for opening bracket
    if(open > 0){
        // add
        str.push_back('(');

        // recursion
        solve(ans, str, open-1, close);

        // backtracking
        str.pop_back();
    }

    // condition for closing bracket
    if(open < close && close > 0){
        // add
        str.push_back(')');

        // recursion
        solve(ans, str, open, close-1);

        // backtracking
        str.pop_back();
    }

}


int main(){

    int n;
    cin >> n;
    int open = n, close = n;

    string str = "";
    vector<string> ans;

    solve(ans, str, open, close);
    cout << ans.size() << endl;;
    printAns(ans);


    return 0;
}