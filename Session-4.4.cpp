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
};

class GamingYouTuber : public YouTuber{

    public:

    void streamGame(string gameName){

        cout<<"\n"<<username
            <<" is now streaming "
            <<gameName
            <<" on "
            <<channelName;
    }
};

main(){

    GamingYouTuber g1;

    g1.getInfo();

    cout<<"Enter Channel Name: ";
    cin>>g1.channelName;

    g1.streamGame("BGMI");
}
