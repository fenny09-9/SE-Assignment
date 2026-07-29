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

class Podcaster : public SocialMediaUser{

    public:

    string podcastName;

    void publishEpisode(string episodeTitle){

        cout<<"\nEpisode "<<episodeTitle
            <<" published on "
            <<podcastName;
    }
};

main(){

    Podcaster p1;

    p1.getInfo();

    cout<<"Enter Podcast Name: ";
    cin>>p1.podcastName;

    p1.publishEpisode("Episode1");
}
