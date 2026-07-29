#include<iostream>
#include<fstream>
using namespace std;

main(){

    ofstream file("wishlist.txt");

    string product;
    float price;

    for(int i=1;i<=3;i++){

        cout<<"Enter Product Name: ";
        cin>>product;

        cout<<"Enter Price: ";
        cin>>price;

        file<<product<<" "<<price<<endl;
    }

    file.close();

    ifstream read("wishlist.txt");

    cout<<"\nWishlist:\n";

    while(read>>product>>price){

        cout<<product<<"\t"<<price<<endl;
    }

    read.close();
}
