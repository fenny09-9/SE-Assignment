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

class YouTuber : public SocialMediaUser{

    public:

    string channelName;

    void uploadVideo(string title){

        cout<<"\nVideo "<<title
            <<" uploaded to "
            <<channelName;
    }
};

main(){

    YouTuber y1;

    y1.getInfo();

    cout<<"Enter Channel Name: ";
    cin>>y1.channelName;

    y1.uploadVideo("Vlog");
}
