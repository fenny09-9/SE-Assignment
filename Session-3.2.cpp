#include<iostream>
using namespace std;

class Product{

    public:

    string productName;
    float price;
    float rating;

    Product(string n,float p,float r){

        productName=n;
        price=p;
        rating=r;
    }

    void displayInfo(){

        cout<<"\nProduct Name = "<<productName;
        cout<<"\nPrice = "<<price;
        cout<<"\nRating = "<<rating;
    }
};

main(){

    string n;
    float p,r;

    cout<<"Enter Product Name: ";
    cin>>n;

    cout<<"Enter Price: ";
    cin>>p;

    cout<<"Enter Rating: ";
    cin>>r;

    Product p1(n,p,r);

    p1.displayInfo();
}
