#include<iostream>
#include<fstream>
using namespace std;

main(){

    ifstream file("content_list.txt");

    string title,platform,status;
    int views,i=1;

    while(file>>title>>platform>>views>>status){

        cout<<"\n"<<i<<". "
            <<title
            <<" - "
            <<platform;

        i++;
    }

    file.close();
}
