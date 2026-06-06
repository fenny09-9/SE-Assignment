#include<iostream>
using namespace std;

class Playlist{

    public:

    string songs[10];
    int count=0;

    void addSong(string songTitle){

        songs[count]=songTitle;
        count++;
    }

    void showSongs(){

        for(int i=0;i<count;i++){
            cout<<"\n"<<songs[i];
        }
    }
};

main(){

    Playlist p1;

    p1.addSong("Song1-Teenage Dreams");
    p1.addSong("Song2-Kabhi Kabhi");
    p1.addSong("Song3-Regrets");

    p1.showSongs();
}
