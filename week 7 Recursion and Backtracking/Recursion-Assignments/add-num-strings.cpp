

#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

void add_recursively(string& num1, int p1, string& num2, int p2, int carry, string& ans){

    // base case
    if(p1 < 0 && p2 < 0) {
        if(carry != 0)
            ans.push_back(carry + '0');
        return ;
    }

    // proccessing || handle one case

    int n1 = (p1>=0 ? num1[p1] : '0') - '0';
    int n2 = (p2>=0 ? num2[p2] : '0') - '0';

    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit  + '0');


    // recursive call
    add_recursively(num1, p1-1, num2, p2-1, carry, ans);
}



string addStrings(string num1, string num2){

    string ans = "";

    add_recursively(num1, num1.size() -1 , num2, num2.size()-1, 0, ans);

    reverse(ans.begin(), ans.end());

    return ans;
}


int main(){



    string num1 = "1234";
    string num2 = "4321";

    cout << addStrings(num1, num2) << endl;



    return 0;
}