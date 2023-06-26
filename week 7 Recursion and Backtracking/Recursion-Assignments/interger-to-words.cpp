

#include<iostream>
#include<vector>
// #include<pair>
using namespace std;

vector<pair<int, string>> mp = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"},{1, "One"}};


string int_to_string(int n){
//
    // base case
    if(n==0) return "Zero";

    // one case + re
    for(auto it : mp){
        
        if(n >= it.first){
            
            string a = "";
            if(n >= 100){
                a = int_to_string(n / it.first) + " ";
            }

            string b = it.second;

            string c = "";

            if(n % it.first != 0){
                c = " " + int_to_string(n % it.first); 
            }
            return a + b + c;
        }
    }
    return "";

}

int main(){


    int n;

    cin >> n ;

    cout << int_to_string(n) << endl;;


    return 0;

}