#include<iostream>
using namespace std;

class Product{

    public:

    void searchProduct(string name){

        cout<<"\nSearching Product : "<<name;
    }

    void searchProduct(string name,string category){

        cout<<"\nSearching Product : "<<name;
        cout<<"\nCategory : "<<category;
    }
};

main(){

    Product p1;

    string name,category;

    cout<<"Enter Product Name: ";
    cin>>name;

    p1.searchProduct(name);

    cout<<"\nEnter Category: ";
    cin>>category;

    p1.searchProduct(name,category);
}
