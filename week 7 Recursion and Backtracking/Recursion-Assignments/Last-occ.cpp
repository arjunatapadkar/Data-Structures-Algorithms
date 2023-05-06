

#include<iostream>
#include<string>
using namespace std;

void last_occ(string& str, int i, int& ans, char& x){

    if(i >= str.length()) return ;

    if(str[i] == x) ans = i;

    last_occ(str, i+1, ans, x);

}

void right_left(string& str, int i, int& ans, char& x){
    if(i<0) return ;
    if(str[i]==x) {
        ans = i;
        return ;
    }
    right_left(str, i-1, ans, x);
}


int main(){

    string str;
    getline(cin, str);

    char x;
    cin >> x;

    int ans1 = -1;
    int ans2 = -1;

    last_occ(str, 0, ans1, x);
    right_left(str, str.length()-1, ans2, x);
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}

