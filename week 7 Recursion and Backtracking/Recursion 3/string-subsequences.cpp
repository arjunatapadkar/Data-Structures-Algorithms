

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubsequences(string& str, string output, int i , vector<string>& ans){

    // base case
    if(i >= str.length()) {
        // cout << output << endl;
        ans.push_back(output);
        return ;
    }

    // exclude
    printSubsequences(str, output, i+1, ans);

    // include
    output += str[i];
    printSubsequences(str, output, i+1, ans);

}

int main(){

    string str  = "Arjun";
    string output = "";

    int i=0; 
    vector<string> ans;

    printSubsequences(str, output, i, ans);

    cout << "All the subsequences of the string are as below : " << endl;

    for(auto it : ans){
        cout << it << endl;
    }

    return 0;
}