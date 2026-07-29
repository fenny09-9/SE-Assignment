#include<iostream>
using namespace std;

class Playlist{

    public:

    string name;
    string createdOn;
    int isPublic;
};

main(){

    Playlist p1;

    p1.name="My Playlist";
    p1.createdOn="01/06/2025";
    p1.isPublic=1;

    cout<<"\nName = "<<p1.name;
    cout<<"\nCreated On = "<<p1.createdOn;
    cout<<"\n Is Public = "<<p1.isPublic;
}
