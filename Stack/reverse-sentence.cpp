

#include<iostream>
#include<stack>
using namespace std;


int main(){

    // stack<int> st;

    // st.push(23);
    // st.push(45);
    // st.push(54);
    // cout << st.top() << endl;
    // cout << st.empty() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // cout << st.size() << endl;
    // st.emplace(3);
    // cout << st.size() << endl;
    // cout << st.top() << endl;


    string st = "Hello, and Good Morning!";

    cout << st << endl;

    stack<string> s;
    for(int i=0; i < st.length(); i++){

        string word = "";
        while(st[i] != ' '){
            word += st[i];
            i++;
        }

        s.push(word);

    }


    while(s.size() != 0){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;








    return 0;
}