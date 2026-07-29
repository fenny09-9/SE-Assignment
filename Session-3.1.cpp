#include<iostream>
using namespace std;

class Playlist{

    public:

    string name;

    Playlist(){

        name="My Favourites";
        cout<<"\nWelcome to Playlist";
    }
};

main(){

    Playlist p1;

    cout<<"\nPlaylist Name = "<<p1.name;
}
