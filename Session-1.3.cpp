#include<iostream>
using namespace std;

class Task{

    public:

        string title;
        int isDone;

        void markDone(){
            isDone=1;
        }

        void display(){

            cout<<"\nTitle = "<<title;

            if(isDone==1){
                cout<<"\tDONE";
            }
            else{
                cout<<"\tNOT DONE";
            }
        }
};

main(){

    Task t1;

    t1.title="Study";
    t1.isDone=0;

    t1.display();

    t1.markDone();

    t1.display();
}
