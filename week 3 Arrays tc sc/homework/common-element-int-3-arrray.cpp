

#include<iostream>
#include<vector>

using namespace std;

int commonElement(vector<int>a, vector<int> b, vector<int>c){

    int i,j,k;
    i=j=k=0;
    while(i<a.size() && j < b.size(), k<c.size()){
        if(a[i]==b[j] && b[j] == c[k]){
            return a[i];
        }
        else if(a[i] < b[j] || a[i] < c[k]){
            i++;
        }
        else if(b[j] < a[i] || b[j] < c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return -1;
}

int main(){

    vector<int> a = {1, 4, 6, 9, 23, 56, 78};
    vector<int> b = {2, 7, 6, 8, 12, 15, 23, 46, 63 };
    vector<int> c = {3, 5, 7, 8,  9, 10, 15, 23, 24, 26, 45};
    
    cout << commonElement(a, b, c) << endl;

    return  0;
}