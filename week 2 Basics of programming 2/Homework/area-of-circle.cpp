
// write function to display area of circle


#include<iostream>
using namespace std;

// area
float area_of_circle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}

// main
int main(){

    float radius;
    cout << "Enter the radius : " << endl;
    cin >> radius;

    cout << "Area of circle : " << area_of_circle(radius) << endl;



    return 0;
}