


//        Time Complexity : O( N! )



#include<iostream>
using namespace std;

void findPermutation(string &str, int i){

    // Base Case - string length 1 or zero return or print
    if(i >= str.length()){
        cout << str << " ";
        return;
    }


    // loop through the each character in the string 
    for(int j = i; j < str.length(); j++){

        // swap the i'th and j'th character
        swap(str[i], str[j]);

        // Again call recursively
        findPermutation(str, i+1);

        // Backtrack the string to get previos string before swapping 
        swap(str[i], str[j]);

    }


}


int main(){


    string str = "abc";
    int i=0;

    findPermutation(str, i);




    return 0;   
}