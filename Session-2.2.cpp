#include<iostream>
using namespace std;

class Playlist{

    public:

    string name;
    string createdOn;
    int isPublic;

    void togglePublic(){

        if(isPublic==1)
            isPublic=0;
        else
            isPublic=1;
    }
};

main(){

    Playlist p1;

    p1.isPublic=1;

    cout<<"\n"<<p1.isPublic;

    p1.togglePublic();
    cout<<"\n"<<p1.isPublic;

    p1.togglePublic();
    cout<<"\n"<<p1.isPublic;
}
