

#include<iostream>
#include<string>
using namespace std;

bool check(string & str, int l, int r){

    if(l >= r) return true;

    if(str[l] != str[r]) return false;

    return check(str, l + 1, r - 1);
}

int main(){

    string str1 = "racecar";

    string str2 = "arjunatapadkar";

    if(check(str1, 0, str1.length()-1)){
        cout << "palindrome " << endl;
    }
    else{
        cout << "not palindrome" << endl;
    }
    if(check(str2, 0, str2.length()-1)){
        cout << "palindrome " << endl;
    }
    else{
        cout << "not palindrome" << endl;
    }

    return 0;
}