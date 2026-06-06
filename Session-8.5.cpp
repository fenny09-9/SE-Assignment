#include<iostream>
#include<fstream>
using namespace std;

main(){

    string title[10],platform[10],status[10];
    int views[10];
    int n=0;

    ifstream file("content_list.txt");

    while(file>>title[n]>>platform[n]>>views[n]>>status[n]){
        n++;
    }

    file.close();

    for(int i=0;i<n;i++){

        cout<<"\n"<<i+1<<". "
            <<title[i];
    }

    int num;

    cout<<"\nEnter Number To Delete: ";
    cin>>num;

    ofstream file2("content_list.txt");

    for(int i=0;i<n;i++){

        if(i!=num-1){

            file2<<title[i]<<" "
                 <<platform[i]<<" "
                 <<views[i]<<" "
                 <<status[i]<<"\n";
        }
    }

    file2.close();

    cout<<"\nUpdated List:\n";

    for(int i=0;i<n;i++){

        if(i!=num-1){

            cout<<"\n"<<title[i];
        }
    }
}
