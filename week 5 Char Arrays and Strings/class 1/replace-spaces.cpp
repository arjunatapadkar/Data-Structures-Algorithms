
#include<iostream>
using namespace std;

void replace_spaces(char a[]){

    for(int i=0; a[i] != '\0'; i++){
   
        if(a[i] == ' '){
            a[i] = '$';
        }
    }

}

int main(){

    char a[] = "Arjun M Atapadkar from Jath";

    cout << a << endl;
    replace_spaces(a);
    cout << a << endl;

    return 0;
}