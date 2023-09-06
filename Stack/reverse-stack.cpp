
#include<iostream>
#include<stack>
using namespace std;

void insert_to_bottom(stack<int> &st, int x){
    if(st.size() == 0){
        st.push(x);
        return;
    }
    int top = st.top();
    st.pop();
    insert_to_bottom(st, x);
    st.push(top);

}

void reverse(stack<int>&st){

    

    if(st.size() > 0){
        int element = st.top();
        st.pop();
        reverse(st);

        insert_to_bottom(st, element);
    }

    return;
 

}

void print(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){

    stack<int> st;
    st.push(23);
    st.push(43);
    st.push(55);
    st.push(12);
    print(st);
    reverse(st);
    print(st);


    return 0;
}