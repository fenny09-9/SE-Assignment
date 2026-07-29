#include<iostream>
using namespace std;

class Content{

    public:

    string title;
    string platform;
    int views;
    string status;

    void display(){

        cout<<"\nTitle = "<<title;
        cout<<"\nPlatform = "<<platform;
        cout<<"\nViews = "<<views;
        cout<<"\nStatus = "<<status;
    }
};

main(){

    Content c1;

    cout<<"Enter Title: ";
    cin>>c1.title;

    cout<<"Enter Platform: ";
    cin>>c1.platform;

    cout<<"Enter Views: ";
    cin>>c1.views;

    cout<<"Enter Status: ";
    cin>>c1.status;

    c1.display();
}
