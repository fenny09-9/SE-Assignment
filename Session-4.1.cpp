#include<iostream>
using namespace std;

class SocialMediaUser{

    public:

    string username;
    int followers;

    void getInfo(){

        cout<<"Enter Username: ";
        cin>>username;

        cout<<"Enter Followers: ";
        cin>>followers;
    }

    void displayProfile(){

        cout<<"\nUsername = "<<username;
        cout<<"\nFollowers = "<<followers;
    }
};

main(){

    SocialMediaUser s1;

    s1.getInfo();

    s1.displayProfile();
}
