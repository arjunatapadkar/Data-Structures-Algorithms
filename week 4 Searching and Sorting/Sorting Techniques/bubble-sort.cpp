

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {5, 2, 7, 6 ,8, 3, 1, 4, 9};

    int n = v.size();
    

    // bubble sort
    // outer loop - (n-1) times

    for(int round = 1; round < n ; round++){
bool flag = true;
        // inner loop - 0 -> i
        for(int j = 0; j < n - round; j++){
            
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                flag = false;
            }
        }
        
        if(flag) break;
        for(auto it : v){
            cout << it << " ";
        }
        cout << endl;
    }

    cout << "final" << endl;
    for(auto it : v){
        cout << it << " ";
    }
     cout << endl;

    return 0;
}