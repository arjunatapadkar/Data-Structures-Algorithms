

#include<iostream>

using namespace std;

char get_grade(int marks){

    // using if-else 
    if(marks>=90)
        return 'A';
    else if(marks>=80)
        return 'B';
    else if(marks>=70)
        return 'C';
    else if(marks>=60)
        return 'D';
    else
        return 'F';


    // using switch statement
    switch(marks/10){
        case 10:
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default: return 'F';
    }

}

int main(){

    int marks;
    cout << "Enter the marks : " << endl;
    cin >> marks;

    cout << "Grade : " << get_grade(marks) <<endl;


    return 0;
}