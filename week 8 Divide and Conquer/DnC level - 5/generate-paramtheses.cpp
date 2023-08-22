
#include<iostream>
#include<vector>
using namespace std;

void generateParantheses(vector<string> &ans, int open, int close, string str){

    // Base cases - 
    // 1 ans found
    if(open == 0 && close == 0){
        ans.push_back(str);
    }




    // include - (
    if(open > 0){
        generateParantheses(ans, open-1, close, str + '(');
    }
        

    // include - )
    if(open < close && close > 0){
        generateParantheses(ans, open, close-1, str + ')' );
    }

    
}

int main(){


    int n = 5;
    int open = n, close = n;
    string str = "";
    vector<string> ans  ;
    generateParantheses(ans, open, close, str);

    for(auto it : ans){
        cout << it << " ";
    }
cout << endl;
    return 0;
}