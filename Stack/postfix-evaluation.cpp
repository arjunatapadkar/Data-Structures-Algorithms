

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;


int solve(string &s){

    stack<int> st;

    for(int i=0; i < s.length()  ; i++){

        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{

            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();

            switch (s[i])
            {
                case '+':
                    st.push(num2+num1);
                    break;
                case '-':
                    st.push(num2-num1);
                    break;
                case '*':
                    st.push(num2*num1);
                    break;
                case '/':
                    st.push(num2/num1);
                    break;
                case '^':
                    st.push(pow(num2,num1));
                    break;
            
            }
        }
    }

    return st.top();

}


int main(){

    string s = "46+2/5*7+";
    // string s = "23*21/+9+";

    cout << solve(s) << endl;

    return 0;
}