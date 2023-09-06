
// Stack implementation using the array
#include<iostream>
using namespace std;
#define n 100
class stack{

    int* arr;
    int top;

    public:

    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){

        if(top == n-1){
            cout << "The stack is overflow"<< endl;
            return;
        }
        
        top++;
        arr[top] = x;

    }

    void pop(){
        if(top == -1){
            cout << "The stack is Empty" << endl;
            return;
        }
        top--;
    }

    void Top(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return ;
        }
        cout <<  arr[top] << endl;
    }

    int isEmpty(){
        return (top == -1);
    }


};





int main(){


        stack st;
        st.Top();
        st.push(21);
        
  
        st.push(32);
        st.Top();

        st.push(39);
        st.Top();
        st.pop();   // 39 popped ---> 21 32
        st.Top();
        st.pop();    // 32 popped ---> 21
        st.Top();
        st.pop();   // 21 popped ----> NULL
        st.Top(); 
        st.pop();   // empty  
      


    return 0;
}