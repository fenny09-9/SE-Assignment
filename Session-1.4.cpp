#include<iostream>
using namespace std;

class Task{

    public:

        string title;
        int isDone;
};

class TaskList{

    public:

        Task t[3];

        void addTask(int i,string name){
            t[i].title=name;
            t[i].isDone=0;
        }

        void markTaskDone(int i){
            t[i].isDone=1;
        }

        void showTasks(){

            for(int i=0;i<3;i++){

                cout<<"\n"<<i+1<<". "<<t[i].title;

                if(t[i].isDone==1)
                    cout<<" - DONE";
                else
                    cout<<" - NOT DONE";
            }
        }
};

main(){

    TaskList ob1;

    ob1.addTask(0,"Study");
    ob1.addTask(1,"Project");
    ob1.addTask(2,"Assignment");

    ob1.markTaskDone(1);

    ob1.showTasks();
}
