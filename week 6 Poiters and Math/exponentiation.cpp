

#include<iostream>
using namespace std;

int fast_expo(int a, int b){

    int ans = 1;

    while(b > 0){

        if(b & 1){
            ans = ans * a;
        }
        // ans = ans * a;
        a = a * a;

        b >>= 1;

    }
    return ans;

}

int expo(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << "a^b : " << expo(a, b) << endl;


    cout << "a^b : " << fast_expo(a, b) << endl;




    return 0;
}