#include<iostream>
#include<fstream>
using namespace std;

main(){

    ofstream file("my_fav_songs.txt",ios::app);

    string song;

    cout<<"Enter New Song: ";
    cin>>song;

    file<<song<<endl;

    file.close();

    cout<<"Song Added";
}
