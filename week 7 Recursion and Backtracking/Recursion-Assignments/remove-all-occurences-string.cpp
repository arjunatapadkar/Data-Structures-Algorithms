

#include<iostream>
#include<string>
// #include<bits/stdc++.h>

using namespace std;

void remove_occ(string & s, string& part){

    int found = s.find(part);

    if(found == string::npos){
        return ;
    }
    else{
        // remove occurence
        string left = s.substr(0, found);
        string right = s.substr(found + part.size(), s.size());

        s = left + right;


        // recursive call
        remove_occ(s, part);
    }
}

int main(){

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << s << endl;
    remove_occ(s, part);
    cout << s << endl;

    return 0;
}