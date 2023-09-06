

// #include<iostream>
// using namespace std;

// // straight counting
// void counting(int n){
//     if(n==1) {
//         cout << n << " ";
//         return ;
//     }
//     counting(n-1);
//     cout << n << " " ;
// }

// void reverse_counting(int n){
//     if(n==0) return ;
//     cout << n << " ";
//     return reverse_counting(n-1);

// }

// int main(){

//     int n;
//     cin >> n;
//     counting(n);
//     cout << endl;
//     reverse_counting(n);

//     return 0;
// }




// Practice

#include<iostream>
using namespace std;

void counting(int n){
    if(n==0){
        return ;
    }
    cout << n << " ";
    counting(n-1);
}

void rev_counting(int n){
    if(n==0){
        return ;
    }
    rev_counting(n-1);
    cout << n << " ";
}

int main(){

    int n = 10;

    cout << endl;
    counting(n);
    cout << endl;
    rev_counting(n);
    cout << endl;

    return 0;
}