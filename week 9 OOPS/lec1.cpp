
#include<iostream>
using namespace std;

class Profile
{   
    public:
    int age;
    string name;
    
};




int main(){

    Profile arjun;
    arjun.name = "Arjun";
    arjun.age = 21;

    cout << "Name : " << arjun.name << " \n" << "Age : " << arjun.age << "\n";

    Profile* atp = new Profile;
    atp->age = 23;
    atp->name = "Atapadkar";

    cout << "Name : " << atp->name << "\n" << "Age : " << atp->age ;


    return 0;
}