

#include<iostream>
#include<vector>
using namespace std;

int find_key(vector<int> a, int key, int i, int count){

    if(i==a.size()) return count;

    if(a[i] == key) {
        count++;
    }

    return find_key(a, key, i+1, count);
}

int main(){

    vector<int> a = {23, 56, 15, 9, 24, 7, 67,234, 67, 67, 67, 67, 85,3465, 86, 32, 87, 135};

    int key = 67;
    int count = 0;
    int ans = find_key(a, key, 0, count);
    if(ans){
        cout << ans << " times present" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}