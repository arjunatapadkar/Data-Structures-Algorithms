

#include<iostream>
using namespace std;

void print_counting(int n){
    cout << "The counting from 1 to " << n <<" :" <<endl;

    for(int i=1;i<=n;i++)
        cout << i << " ";
        
}

int main(){

    int n;
    cout << "Enter the n'th value : " << endl;
    cin >> n;

    print_counting(n);

    return 0;
}