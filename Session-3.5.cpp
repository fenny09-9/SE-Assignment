#include<iostream>
#include<fstream>
using namespace std;

class Playlist{

    public:

    string name;

    Playlist(string n){
        name=n;
    }

    ~Playlist(){

        ofstream file("autosave.txt");

        file<<name;

        file.close();

        cout<<"\nPlaylist Saved";
    }
};

main(){

    string n;

    cout<<"Enter Playlist Name: ";
    cin>>n;

    Playlist p1(n);
}
