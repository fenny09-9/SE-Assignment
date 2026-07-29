#include<iostream>
using namespace std;

class Ticket{

    public:

    Ticket(){
        cout<<"\nTicket Booked";
    }

    ~Ticket(){
        cout<<"\nSaving your ticket...";
    }
};

main(){

    Ticket t1;
}
