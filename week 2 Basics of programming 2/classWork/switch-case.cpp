

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the n : " << endl;
    cin >> n;

    switch (n)
    {
    case 1 :
        cout << "Arjun Atapadkar" << endl;
        break;
    case 2:
        cout << "Gholeshwar" << endl;
        break;
    case 3:
        cout << "Jath " << endl;
        break;
    default:
        cout << "Invalid \n";
        break;
    }



    return 0;
}