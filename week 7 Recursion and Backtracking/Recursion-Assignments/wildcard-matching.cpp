

#include<iostream>
#include<string>
using namespace std;


    bool matchHelper(string & s,int si, string& p,int pi){

        // base condition
        if(pi == p.size() && si == s.size()) return true;

        if(si == s.size() && pi < p.size()){
            while(pi < p.size()){
                if(p[pi++] != '*') return false;
            }
            return true;
        }

        // match one character

        if(p[pi] == s[si] || '?' == p[pi])
            return matchHelper(s, si+1, p, pi+1);
        
        if(p[pi] == '*'){
            // treat as * matches with null character
            bool caseA = matchHelper(s, si, p, pi+1);

            // treat as * matches with one character
            bool caseB = matchHelper(s, si+1, p, pi);

            return caseA || caseB;
        } 


        return false;
    }

    bool isMatch(string s, string p) {
        
        int pi = 0;
        int si = 0;

        return matchHelper(s, si, p, pi);

    }
int main(){

    string s, p;
    cin >> s >> p;

    if(isMatch(s, p)){
        cout << "String Matches " << endl;
    }
    else{
        cout << "String does not matches " << endl;
    }


    return 0;
}