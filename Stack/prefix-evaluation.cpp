
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int solve(string &s){

    stack<int> st;

    for(int i = s.length() - 1; i>=0 ; i--){

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
                    st.push(num1+num2);
                    break;
                
                case '-':
                    st.push(num1-num2);
                    break;
                
                case '*':
                    st.push(num1*num2);
                    break;
                
                case '/':
                    st.push(num1/num2);
                    break;
                
                case '^':
                    st.push(pow(num1, num2));
                    break;
                
            }

        }


    }


    return st.top();
}

int main(){

    
    string s = "++*23/219";

    cout << solve(s) << endl;

    return 0;
}
