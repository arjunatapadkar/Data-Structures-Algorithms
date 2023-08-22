

#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string> &ans, string &str, int index, string output, vector<string> &map){

    // base case
    if(index >= str.length()){
        ans.push_back(output);
        return;
    }

    // solve 1 case 

    // to convert the string into the integer we have to substract the '0' for that current element
    int digit = str[index] - '0';
    string value = map[digit];

    for(int i=0; i<value.length(); i++){

        // push back character
        output.push_back(value[i]);
        solve(ans, str, index+1, output, map);
        output.pop_back();

    }



}   

int main(){


    string str = "29";
    int index = 0;
    vector<string> map (10);
    // map[0] = "";
    // map[1] = "";
    map[2] = "abc";
    map[3] = "def";
    map[4] = "ghi";
    map[5] = "jkl";
    map[6] = "mno";
    map[7] = "pqrs";
    map[8]  = "tuv";
    map[9] = "wxyz";

    string output = "";

    vector<string> ans;

    solve(ans, str, index,  output, map);


    for(auto it: ans){
       cout << it << " ";
    }
    cout << endl;





    return 0;

}