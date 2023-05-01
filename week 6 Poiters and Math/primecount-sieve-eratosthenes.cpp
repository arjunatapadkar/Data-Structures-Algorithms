

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<bool> arr(n, true);
    int count = 0;
    for(int i = 2; i < n; i++){
        if(arr[i]){
            count++;
            for(int j = i*2; j < n; j += i){
                arr[j] = false;
            }
        }
    } 

    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    cout << count << endl;

    return 0;
}