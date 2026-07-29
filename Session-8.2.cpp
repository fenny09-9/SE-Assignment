#include<iostream>
#include<fstream>
using namespace std;

main(){

    ofstream file("content_list.txt",ios::app);

    string title,platform,status;
    int views;

    cout<<"Enter Title: ";
    cin>>title;

    cout<<"Enter Platform: ";
    cin>>platform;

    cout<<"Enter Views: ";
    cin>>views;

    cout<<"Enter Status: ";
    cin>>status;

    file<<title<<" "
        <<platform<<" "
        <<views<<" "
        <<status<<"\n";

    file.close();

    cout<<"\nContent Saved";
}
