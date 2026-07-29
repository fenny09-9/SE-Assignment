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
};

class InstagramInfluencer : public SocialMediaUser{

    public:

    void postStory(string storyTitle){

        cout<<"\n"<<username
            <<" posted a new story: "
            <<storyTitle;
    }
};

main(){

    InstagramInfluencer i1;

    i1.getInfo();

    i1.postStory("Trip");
}
