#include<iostream>
using namespace std;

class Movie{

    public:

    string name;

    Movie(string n){
        name=n;
    }

    Movie(Movie &m){
        name=m.name;
    }

    void display(){
        cout<<"\nMovie Name = "<<name;
    }
};

main(){

    string n;

    cout<<"Enter Movie Name: ";
    cin>>n;

    Movie m1(n);

    Movie m2=m1;

    cout<<"\nOriginal Movie";
    m1.display();

    cout<<"\nCopied Movie";
    m2.display();
}
