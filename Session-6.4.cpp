#include<iostream>
using namespace std;

class UserProfile{

    private:

    string phoneNumber;

    public:

    void setPhoneNumber(string p){

        phoneNumber=p;
    }

    string getPhoneNumber(){

        return phoneNumber;
    }
};

main(){

    UserProfile u1;

    string p;

    cout<<"Enter Phone Number: ";
    cin>>p;

    u1.setPhoneNumber(p);

    cout<<"\nPhone Number = "<<u1.getPhoneNumber();
}
