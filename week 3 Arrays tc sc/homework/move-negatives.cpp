

#include<iostream>
#include<vector>
using namespace std;

void moveNegatives(vector<int> &a){

    int low = 0;
    int high = a.size() -1 ;
    while(low < high){
        if(a[high] < 0){
            swap(a[low++], a[high] );
        }
        else{
            high--;
        }
    }
}

int main(){

    vector<int> a = {1, -2, 4, -4, 5, 7, -8, -3, -9, 0, 2, -4, 8, 4, -3};

    for(int j=0; j<a.size(); j++)
            cout << a[j] << " ";
    cout << endl;

    moveNegatives(a);

    for(int j=0; j<a.size(); j++)
            cout << a[j] << " ";
    cout << endl;
    
    return 0;
}