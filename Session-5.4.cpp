#include<iostream>
using namespace std;

class MusicPlayer{

    public:

    virtual void play(string song){

        cout<<"\nPlaying: "<<song;
    }
};

class SpotifyPlayer : public MusicPlayer{

    public:

    void play(string song){

        cout<<"\nStreaming on Spotify: "<<song;
    }
};

main(){

    string song;

    cout<<"Enter Song Name: ";
    cin>>song;

    MusicPlayer *m1;

    SpotifyPlayer s1;

    m1=&s1;

    m1->play(song);
}
