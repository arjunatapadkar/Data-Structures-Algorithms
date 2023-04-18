
#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "Arjun Atapadkar";
    // cout << str << endl;

    string s  = "Arjun";
    // cin >> s;
    // getline(cin, s);

    // cout << s << endl; 

    cout << str[3] << " " << s[2] << endl;


    cout << str.length() << endl;

    cout << str.empty() << endl;

    cout << str.find("Arjun") << endl;

    str.push_back('A') ;
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    cout << str.substr(0, 5) << endl;
    cout << str.substr(0, 5) << endl;

    cout << str.compare(s) << endl;
    cout << s.compare(str) << endl;

    str.replace(6, 10, "Atp");
    cout << str << endl;

    str.erase(6, 3) ;
    cout << str << endl;

    int a = '0';
    cout <<a <<endl;

    return 0;
}