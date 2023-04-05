
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> a, int target){

    int s = 0;
    int e = a.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if(a[mid] == target)
            return mid;
        if(mid + 1 <= e && a[mid + 1] == target)
            return mid + 1;
        if(mid >= s && a[mid - 1] == target)
            return mid - 1;
        
        if(a[mid] < target)
            s = mid + 2;
        else    
            e = mid - 2;

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int> v = {10, 3, 40, 20, 50, 80, 70};
    int target = 20;

    int ind = search(v, target);

    cout << target << " found at ind " << ind << endl;

    return 0;
}