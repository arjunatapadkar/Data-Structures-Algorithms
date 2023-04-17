

#include<iostream>
using namespace std;

bool check(char a[], int e){
    int s = 0;
    
    while(s <= e ){
        if(a[s++] == a[e--]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    char a[] = "Arjun";

    int e = sizeof(a)/sizeof(char);
    
    if(check(a, e-2)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }


    return 0;
}