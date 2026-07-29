#include<iostream>
using namespace std;

class InstaStory{

    protected:

    int storyViews;
};

class SponsoredStory : public InstaStory{

    public:

    void getData(){

        cout<<"Enter Story Views: ";
        cin>>storyViews;
    }

    void display(){

        cout<<"\nStory Views = "<<storyViews;
    }
};

main(){

    SponsoredStory s1;

    s1.getData();
    s1.display();
}
