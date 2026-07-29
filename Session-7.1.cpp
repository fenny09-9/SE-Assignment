#include<iostream>
#include<fstream>
using namespace std;

main(){

    ofstream file("my_fav_songs.txt");

    file<<"Believer"<<endl;
    file<<"Perfect"<<endl;
    file<<"ShapeOfYou"<<endl;
    file<<"Faded"<<endl;
    file<<"Closer"<<endl;

    file.close();

    cout<<"Songs Saved";
}
