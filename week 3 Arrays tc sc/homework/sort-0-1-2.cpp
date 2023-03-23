

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> &arr){

    int start = 0;
    int mid  = 0;
    int end = arr.size()-1;
    
    while(mid<=end){
        if(arr[mid] == 0){
            swap(arr[mid++], arr[start++]);
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[end--]);
        }
        else{
            mid++;
        }
    }
}

int main(){

    vector<int> a = {1, 0, 0, 2, 0, 1, 0, 2, 0, 1, 1, 2, 0, 0, 1};

    for(auto it: a)
        cout << it << " ";
    cout << endl;

    sortColors(a);

    for(auto it: a)
        cout << it << " ";
    cout << endl;


    return 0;
}