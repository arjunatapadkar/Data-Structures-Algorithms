
// sum of even numbers upto n 

#include<iostream>
using namespace std;

int sum_of_even_nums(int n){

    int sum = 0;
    for(int i=2; i<=n; i+=2)
        sum += i;
    return sum;
}

int main(){

    int n;
    cout << "Enter the n : " << endl;
    cin >> n;

    cout << "Sum of even nums till " << n << " : " << sum_of_even_nums(n) << endl;


    return 0;
}