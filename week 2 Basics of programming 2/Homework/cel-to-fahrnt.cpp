

// convert celcius to fahrenheit

//  f = (c * 9/5) + 32; --- f = (c*1.8)+32

#include<iostream>
using namespace std;


// cel-fah
float cel_to_fah(float cel){
    return ((cel * 1.8)+32);
}

// main
int main(){

    float cel;
    cout << "Enter the celcius : " << endl;
    cin >> cel;

    cout << "Fahenheit : " << cel_to_fah(cel) << endl;
    return 0;
}