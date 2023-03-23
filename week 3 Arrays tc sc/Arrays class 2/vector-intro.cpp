

#include<iostream>
#include<vector>

using namespace std;

int main(){

// vector declaration
    vector<int> arr;
    
    int n = 5;
    vector<int> a(n);

    // vector initialization



    vector<int> v1{10, 20, 30, 40, 50};

    for(auto i=0; i<v1.size();i++)
        cout << v1[i] << " ";
    cout <<endl;

    // array traversing
    for(auto it : v1){
        cout << it << " ";
    }
    cout << endl;

    vector<int> v2(10, 23);
    for(auto i=0; i<v2.size();i++)
        cout << v2.at(i) << " ";
    cout <<endl;


    cout << "size : " << arr.size() << endl;
    cout << "capacity : " << arr.capacity() << endl;
    cout << "isEmpty : " << arr.empty() << endl;

    // inserting elements by push_back
    arr.push_back(23);
    arr.push_back(34);
    arr.push_back(64);
    arr.push_back(874);
    arr.push_back(874);

    cout << "size : " << arr.size() << endl;
    cout << "capacity : " << arr.capacity() << endl;
    cout << "isEmpty : " << arr.empty() << endl;

    // removing elements from vectorr
    arr.pop_back();
    cout << "size : " << arr.size() << endl;
    cout << "capacity : " << arr.capacity() << endl;

    return 0;
}